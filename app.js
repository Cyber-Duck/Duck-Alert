var Observable = require("FuseJS/Observable");
var LocalNotify = require("FuseJS/LocalNotifications");
var phone = require("FuseJS/Phone");
var Storage = require("FuseJS/Storage");

Storage.read("domains.json")
.then(function(contents) {
    console.log(contents);
    if(contents == "") {
        Storage.write("domains.json", "[]");
    }
}, function(error) {
    console.log(error);
});

var status = Observable("Status Code");
var failCount = Observable(0);
var totalCount = Observable(0);
var url = Observable("");
var resbody;

var isWebsiteDown = failCount.map(function(value){
  console.log(value);
  return value >= 1;
})

var isWebsiteUp = failCount.map(function(value){
  return value == 0;
})
//Local Notifications
LocalNotify.onReceivedMessage = function(payload) {
    console.log ("Recieved Local Notification: " + payload);
    LocalNotify.clearAllNotifications();
    LocalNotify.clearBadgeNumber();
};

function sendNow() {
    LocalNotify.now("Boom!", "Just like that", "payload", true);
};

function check() {

  fetch(url.value, {
      method: 'GET',
      headers: { "Content-type": "application/json"}
  }).then(function(response) {

      status.value = response.status; //sets Observable to server status
      
      // return response.json();    // This returns a promise
  }).then(function(responseObject) {
      //do something with response object / data
      
  }).catch(function(err) {
      // An error occurred somewhere in the Promise chain
      console.log(err)
  });

} 

var interval = 5000;

function checkSetTimeout() {

    console.log(url.value);
    check();
    console.log("RES BODY "+resbody);

    var newDomain = url.value;
    var oldDomainsFile = Storage.read("domains.json");
    oldDomainsFile = JSON.parse(JSON.stringify(oldDomainsFile));
    var oldDomains = [];
    oldDomains.push({"domain":newDomain});

    Storage.write("domains.json", JSON.stringify(oldDomains))
    .then(function(succeeded) {
        if(succeeded) {
            console.log("File saved");
        }
        else {
            console.log("Couldn't write to file.");
        }
    });

    setTimeout(function(){

    if (status.value === 200) {
        interval = 5000;
        failCount.value = 0;
        totalCount.value ++;
        checkSetTimeout();
    }
    else {
        interval = 1000;
        checkSetTimeout();
        failCount.value ++;
        totalCount.value ++;
        if (failCount.value >= 3) {
            sendNow();
            console.log("Contact Cyber Duck!") 
        }
    }

    }, interval)
}


function callTeam() {
  phone.call("+442089530070");
}

function addDomain() {
  router.goto("PageAdd")
}

// var domains = [
//     { domain: 'http://beta1.cyber-duck.co.uk/duck-alert' },
//     { domain: 'http://beta1.cyber-duck.co.uk/duck-alert-fail' }
// ]

module.exports = {
    status: status,
    url: url,
    failCount: failCount,
    totalCount: totalCount,
    check: check,
    checkSetTimeout: checkSetTimeout,
    sendNow: sendNow,
    isWebsiteDown: isWebsiteDown,
    callTeam: callTeam,
    addDomain: addDomain
};
