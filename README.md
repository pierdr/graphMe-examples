# graphMe-examples
--
<div style="text-align:center">
<img  src="http://www.pierdr.com/img/icon-graphMe.png"></img>
</div>

graphMe it's a tool for visualizing incoming signals from a microcontroller, like an Arduino for example. graphMe allows to connect the microcontroller via a serial port and simply display the content of the communication.

You can download graphMe [here]().

###What do you need to know:
- While graphMe is a Mac Application, you need to send your sensor value from your microcontroller to graphMe. 
- This is _extremely_ easy!
- If you are using Arduino, you can use `Serial.print` to output your sensor value for graphMe in this way:<br>
`Serial.print(sensorValue)`<br>
`Serial.print('\n')`
- You can also send multiple values (up to 8) if separated by a comma:<br>
`Serial.print(sensor2);`<br>
  `Serial.print(",");`<br>
  `Serial.println(sensor1);`<br>
  `Serial.print("\n");`
- The sequence \n is the line ending and can be replaced by:
`Serial.println(sensorValue);`
- It works with ints and floats;
- `Serial.print` is not perfect, infact sometimes it loses one byte, as a result you have a noisy signal. This might be ok, or might not be ok.
- If you don't want to have a noisy signal you can use the option __USE PACKETSERIAL__ in graphMe. To send packaged communication to graphMe you need to use the library "PacketSerial" made by Christopher Baker, you can download it from the library manager in Arduino or download it from github [here](https://github.com/bakercp/PacketSerial).
- to use packet serial check the arduino sample code for PacketSerial.
  


