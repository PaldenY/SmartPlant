
  /*
 SmartPlant
 Palden Yuebar (SIT107)
 Levels of soil moisture:
 0-400 - Dry soil
 400-700 - Optimum level
 700-950 - Too much water
 */

void setup() {
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT); 
}
void loop() {
  int level;             
  level = analogRead(0); 
  Serial.println(level);      
  if (level <= 300) {
    digitalWrite(LED_BUILTIN, HIGH); // Less than 300, results to LED turning on as a reminder to water plants.
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); // More than 300, results to LED turning off. 
  }
  delay(500);
}
