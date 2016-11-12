(function(window, base64){

	'use strict';
	
	window.atob = function(encodedData) {
		return base64.decodeAscii(encodedData);
	}

	window.btoa = function(stringToEncode) {
		return base64.encodeAscii(stringToEncode);
	}
	
})(window, require("FuseJS/Base64"));

atob = window.atob;
btoa = window.btoa;