#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
int pin2 = 2, pin3 = 3, pin4 = 4, pin5 = 5;
int i = 0;
// Red Power Button fn
void onoff(int input){
  Serial.println(input);
  if((input==18615) && i==0){
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, HIGH);
    i=1;
  }
  else if((input==18615) && i==1){
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    i=0;
  }
  //btn 1
  else if(input==20655){
    digitalWrite(pin2, !digitalRead(pin2));
    i=1;
  }
  //btn 2
  else if(input==-10201){
    digitalWrite(pin3, !digitalRead(pin3));
    i=1;
  }
  // btn 3
  else if(input==-2041){
    digitalWrite(pin4, !digitalRead(pin4));
    i=1;
  }
  // btn 4
  else if(input==12495){
    digitalWrite(pin5, !digitalRead(pin5));
    i=1;
  }
}

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    onoff(results.value);
    irrecv.resume(); // Receive the next value
  }
  //delay(100);
}

