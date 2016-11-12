var Observable = require("FuseJS/Observable");
var LocalNotify = require("FuseJS/LocalNotifications");

var status = Observable("This is a test");
var count = Observable(0);

//Local Notifications
LocalNotify.onReceivedMessage = function(payload) {
    console.log ("Recieved Local Notification: " + payload);
    LocalNotify.clearAllNotifications();
    LocalNotify.clearBadgeNumber();
};

function sendNow() {
    LocalNotify.now("Boom!", "Just like that", "payload", true);
};

function change() {

  fetch('https://ramonlapenta.com/slhkfadlkfklasdf', {
      method: 'GET',
      headers: { "Content-type": "application/json"}
  }).then(function(response) {
      status.value = "The Server Says: " +response.status; //sets Observable to server status

      if (response.status === 200) {
        console.log("Server OK")
        count.value = 0;
      }

      else {
        console.log("Contact Cyber Duck!")
        count.value ++;
          if (count.value >= 3) {
            sendNow();
            console.log("message sent"); 
          }
      }
      
      // return response.json();    // This returns a promise
  }).then(function(responseObject) {
      
      

  }).catch(function(err) {
      // An error occurred somewhere in the Promise chain
  });

} 

module.exports = {
    status: status,
    count: count,
    change: change,
    sendNow: sendNow
};
