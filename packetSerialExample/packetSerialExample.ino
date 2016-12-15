/*******
 * 
 This is an example code to use with graphMe app. 
 made by Pierluigi Dalla Rosa (www.pierdr.com)

 The packetSerial uses the PacketSerial library provided by Christopher Baker
 https://github.com/bakercp
 * 
 */


#include <PacketSerial.h>
PacketSerial serial;
void setup() {
  // put your setup code here, to run once:
  serial.setPacketHandler(&onPacket);
  serial.begin(115200);
}

void loop() {
  String strTmp="";
  int sensor1=analogRead(A0);
  int sensor2=analogRead(A1);

  strTmp=String(sensor1);
  strTmp+=",";
  strTmp+=String(sensor2);
  strTmp+="\n";
  

  int bufferLength=strTmp.length();
  
  uint8_t bufferTmp[bufferLength]; 
  
  strTmp.toCharArray(bufferTmp,bufferLength);
  serial.send(bufferTmp, bufferLength);
  serial.update(); 
}
void onPacket(const uint8_t* buffer, size_t size)
{
  
}



