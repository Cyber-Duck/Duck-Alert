var Observable = require("FuseJS/Observable");
var LocalNotify = require("FuseJS/LocalNotifications");

var status = Observable("Status Code");
var failCount = Observable(0);
var totalCount = Observable(0);
var url = Observable("");
var resbody;

var isWebsiteDown = failCount.map(function(value){
  console.log(value);
  return value >= 1;
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

module.exports = {
    status: status,
    url: url,
    failCount: failCount,
    totalCount: totalCount,
    check: check,
    checkSetTimeout: checkSetTimeout,
    sendNow: sendNow,
    isWebsiteDown: isWebsiteDown
};
