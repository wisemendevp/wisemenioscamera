var ownioscam = {
getPicture: function(success, failure){
    cordova.exec(success, failure, "ownioscam", "openCamera", []);
}
};