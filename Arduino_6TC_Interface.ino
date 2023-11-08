#include <max6675.h>

int sck = 2;
int so = 3;
int cs1 = 7;
int cs2 = 8;
int cs3 = 9;
int cs4 = 10;
int cs5 = 11;
int cs6 = 12;

MAX6675 senso1(sck, cs1, so);
MAX6675 senso2(sck, cs2, so);
MAX6675 senso3(sck, cs3, so);
MAX6675 senso4(sck, cs4, so);
MAX6675 senso5(sck, cs5, so);
MAX6675 senso6(sck, cs6, so);


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("T1 is ");
  Serial.println(senso1.readCelsius());
  Serial.print("T2 is ");
  Serial.println(senso2.readCelsius());
  Serial.print("T3 is ");
  Serial.println(senso3.readCelsius());
  Serial.print("T4 is ");
  Serial.println(senso4.readCelsius());
  Serial.print("T5 is ");
  Serial.println(senso5.readCelsius());
  Serial.print("T6 is ");
  Serial.println(senso6.readCelsius());
  delay(1000);
  

}
