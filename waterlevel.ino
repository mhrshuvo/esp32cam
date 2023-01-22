String getWaterlevel(){
  int value = analogRead(WLVL_PIN);
   return  String(value);
}
