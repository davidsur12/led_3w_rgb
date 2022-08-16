

#include <SPI.h>
#include <TFT_eSPI.h> // Hardware-specific library
TFT_eSPI tft = TFT_eSPI();


int ledR = 22;
int ledG = 21;
int ledB = 19;
int cont = 0;
int t = 1000;
void setup() {
  // put your setup code here, to run once:

  tft.init();
  tft.setRotation(1);

  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);

  pinMode(ledR , OUTPUT);
  pinMode(ledG , OUTPUT);
  pinMode(ledB , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
    for(int i=0;i<frames;i++)

      {
      delay(40);
      tft.pushImage( 0 , 0  ,animation_width  , animation_height, frame[i]);
      }


  */

  cont++;
  switch (cont) {
    case 1:
      digitalWrite(ledR , HIGH);
      delay(t);
      digitalWrite(ledR , LOW);
      break;

    case 2:
      digitalWrite(ledG , HIGH);
      delay(t);
      digitalWrite(ledG , LOW);
      break;

    case 3:
      digitalWrite(ledB , HIGH);
      delay(t);
      digitalWrite(ledB , LOW);
      cont = 0;
      break;

  }






}
