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

var status = Observable();
var status2 = Observable();
var failCount = Observable(0);
var failCount2 = Observable(0);
var totalCount = Observable(0);
var url = Observable();

var isWebsiteDown = failCount.map(function(value){
  return value >= 1;
})

var isWebsiteDown2 = failCount2.map(function(value){
  return value >= 1;
})

var isWebsiteUp = failCount.map(function(value){
  return value == 0;
})

var isWebsiteUp2 = failCount2.map(function(value){
  return value == 0;
})

//Local Notifications
LocalNotify.onReceivedMessage = function(payload) {
    console.log ("Recieved Local Notification: " + payload);
    LocalNotify.clearAllNotifications();
    LocalNotify.clearBadgeNumber();
};

function sendNow() {
    LocalNotify.now("Uh Oh! There is a problem with your website.", "Call Cyber-Duck", "payload", true);
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

            if (failCount===3){
              sendNow();
              console.log("Website Down!")
            }
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

function check2() {

  var check2Url = "http://beta1.cyber-duck.co.uk/duck-alert-12345"
  console.log("CHECKING CYBER DUCK");

  fetch(check2Url, {
      method: 'GET',
      headers: { "Content-type": "application/json"}
  }).then(function(response) {
      status2.value = response.status; 
  }).then(function(responseObject) {
      //do something with response object / data
  }).catch(function(err) {
      // An error occurred somewhere in the Promise chain
      console.log(err)
  });

} 

function checkSetTimeout2() {

    check2();

    setTimeout(function(){

    if (status2.value === 200) {
        interval = 5000;
        failCount2.value = 0;
        checkSetTimeout2();
    }
    else {
        interval = 1000;
        checkSetTimeout2();
        failCount2.value ++;
        if (failCount.value >= 3) {

            if (failCount2===3){
              sendNow();
              console.log("Website Down!")
            }
        }
    }

    }, interval)
}

checkSetTimeout2(); 

module.exports = {
    status: status,
    url: url,
    failCount: failCount,
    failCount2: failCount2,
    totalCount: totalCount,
    check: check,
    check2: check2,
    checkSetTimeout: checkSetTimeout,
    checkSetTimeout2: checkSetTimeout2,
    sendNow: sendNow,
    isWebsiteDown: isWebsiteDown,
    isWebsiteDown2: isWebsiteDown2,
    isWebsiteUp: isWebsiteUp,
    isWebsiteUp2: isWebsiteUp2,
    callTeam: callTeam,
    addDomain: addDomain
};
