String getWaterlevel(){
  int val = analogRead(WLVL_PIN);
  Serial.println(val);
  String v = "Water: " + String (val) + " mm \n";
  return v;
}
