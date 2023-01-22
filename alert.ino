void alertManagement() {
  
      String alert = "alert , \n";
      alert += "Atm theft ditected \n";
      alert += "/photo : takes a new photo\n";
      alert += "/flash : toggles flash LED \n";
      alert += "/water : Know about water \n";
      bot.sendMessage(CHAT_ID, alert, "");

        Serial.println(F("*** ALERT ***"));
        digitalWrite(RELAY_PIN,LOW);
        sendPhotoTelegram();
        Serial.println("P1");
        
         
        
        Serial.println(F("*** END OF ALERT ***"));

       
   
}
