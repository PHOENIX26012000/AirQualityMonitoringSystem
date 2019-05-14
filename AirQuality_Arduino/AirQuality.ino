#include <SoftwareSerial.h>

#define rxPin 10
#define txPin 11

SoftwareSerial BSerial(rxPin,txPin); //RX= D10,TX= D11

const int MQ7pin=0; //MQ-7 on pin A0
const int MQ135pin=2; // MQ-135 on pin A2
//const int DMQ7=7;
//const int DMQ135=8;
int mq7;
int mq135;


void setup() {
  // put your setup code here, to run once:
  //pinMode(DMQ7, OUTPUT);
  //pinMode(DMQ135, OUTPUT);
  Serial.begin(9600); // sets baud rate
  BSerial.begin(9600); //sets bluetooth serial
}

void loop() {
  // put your main code here, to run repeatedly:

  mq7=analogRead(MQ7pin);
  mq135=analogRead(MQ135pin);

  Serial.print("MQ-7: ");
  Serial.println(mq7);
  Serial.print("MQ-135: ");
  Serial.println(mq135);
  BSerial.print("MQ-7: ");
  BSerial.println(mq7);
  BSerial.print("MQ-135: ");
  BSerial.println(mq135);
  
  delay(10000);
}
