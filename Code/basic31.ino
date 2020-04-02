// Example 06A: Blink LED at a rate specified by the
// value of the analogue input
int LED = 13; // the pin for the LED
int val = 0; // variable used to store the value
 // coming from the sensor
void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT); // LED is as an OUTPUT
 digitalWrite(LED, HIGH);
 // Note: Analogue pins are
 // automatically set as inputs
}

void loop() {
 val = analogRead(1); // read the value from
 // the sensor
  if(val<464){
    digitalWrite(LED, HIGH); 
  }
  else{
    digitalWrite(LED, LOW);
  
  }
  //delay(100);
 

 // some time
 //Serial.print("--");
 Serial.print(val);
 digitalWrite(LED, LOW); // turn the LED off
 //delay(val); // stop the program for
 // some time
}