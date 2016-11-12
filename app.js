var Observable = require("FuseJS/Observable");
var LocalNotify = require("FuseJS/LocalNotifications");

var status = Observable("Status Code");
var failCount = Observable(0);
var totalCount = Observable(0);

//Local Notifications
LocalNotify.onReceivedMessage = function(payload) {
    console.log ("Recieved Local Notification: " + payload);
    LocalNotify.clearAllNotifications();
    LocalNotify.clearBadgeNumber();
};

function sendNow() {
    LocalNotify.now("Boom!", "Just like that", "payload", true);
};

var url = 'http://jasonlai.tech/';
function check() {

  fetch(url, {
      method: 'GET',
      headers: { "Content-type": "application/json"}
  }).then(function(response) {
      status.value = response.status; //sets Observable to server status
      
      // return response.json();    // This returns a promise
  }).then(function(responseObject) {
      //do something with response object / data
      
  }).catch(function(err) {
      // An error occurred somewhere in the Promise chain
  });

} 

var interval = 5000;

function checkSetTimeout() {
 
 check();
 totalCount.value ++;

 setTimeout(function(){

  if (status.value === 200) {
    interval = 5000;
    failCount.value = 0;
    checkSetTimeout();
  }
  else {
    interval = 1000;
    checkSetTimeout();
    failCount.value ++;
      if (failCount.value >= 3) {
        sendNow();
        console.log("Contact Cyber Duck!") 
      }
  }

 }, interval)
}


module.exports = {
    status: status,
    failCount: failCount,
    totalCount: totalCount,
    check: check,
    checkSetTimeout: checkSetTimeout,
    sendNow: sendNow
};
