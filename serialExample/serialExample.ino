/*******
 * 
 This is an example code to use with graphMe app. 
 made by Pierluigi Dalla Rosa (www.pierdr.com)

 Just printing works, but you might lose bytes and have noisy signals.
 Check packetSerialExample for a more reliable communication.
 * 
 */
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
 
}

void loop() {

  // put your main code here, to run repeatedly:
  int sensor1=analogRead(A1);
  int sensor2=analogRead(A0);
  Serial.print(sensor2);
  Serial.print(",");
  Serial.println(sensor1);
  Serial.print("\n");
  
  
  
}
