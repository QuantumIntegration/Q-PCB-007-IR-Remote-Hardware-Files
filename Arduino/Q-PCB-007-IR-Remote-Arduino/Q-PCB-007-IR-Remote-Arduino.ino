#include <IRremote.h>

IRsend irsend;  

void setup() {
  Serial.begin(115200);
}

void readButtons(void){
  int val = analogRead(A0);
  if(val > 400){
    Serial.println("Blue 1");
    // power
    irsend.sendSony(0xA90, 12);
  }else if(val > 300){
    Serial.println("Blue 2");
    // vol up
    irsend.sendSony(0x490, 12);
  }else if(val > 200){
    Serial.println("Blue 3");
    // vol dn
    irsend.sendSony(0xc90, 12);
  }
  val = analogRead(A1);
  if(val > 400){
    Serial.println("Red 1"); 
    // chan up 
    irsend.sendSony(0x90, 8);
  }else if(val > 300){
    Serial.println("Red 2");
    // chan dn
    irsend.sendSony(0x890, 12);
  }else if(val > 200){
    Serial.println("Red 3");
    // mute
    irsend.sendSony(0x290, 12);
  }
  val = analogRead(A2);
  if(val > 400){
    Serial.println("Yellow 1");
    // power
//    irsend.sendSony(0xA90, 12);  
  }else if(val > 300){
    Serial.println("Yellow 2");
    // power
//    irsend.sendSony(0xA90, 12);
  }else if(val > 200){
    Serial.println("Yellow 3");
    // power
//    irsend.sendSony(0xA90, 12);
  }
  val = analogRead(A3);
  if(val > 400){
    Serial.println("Green 1"); 
    // power
//    irsend.sendSony(0xA90, 12); 
  }else if(val> 300){
    Serial.println("Green 2");
    // power
//    irsend.sendSony(0xA90, 12);
  }else if(val > 200){
    Serial.println("Green 3");
    // power
//    irsend.sendSony(0xA90, 12);
  }
}

void loop() {
  delay(50);
  readButtons();
}
