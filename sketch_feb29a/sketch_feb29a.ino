#include <Adafruit_NeoPixel.h>


// pin on which Arduino is connected to the NeoPixel
int LEDPIN = 2;
// how many NeoPixels are attached to the Arduino
int NUMPIXELS = 28;

//flicker delay
unsigned long delayStart = 0; // the time the delay started
bool delayRunning = false;
bool rainbow = true;


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LEDPIN ,NEO_GRB + NEO_KHZ800);

int delayval = 1000; //delay for half a second

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  
  delayStart = millis();   // start delay
 // delayRunning = true; // not finished yet
}

void loop() {
  // put your main code here, to run repeatedly:
  
  /**Need 3 second delay from hitting upload 
  or wait until yellow light starts blinking**/
  //Intial flickering (4 seconds) 
  while ((millis() - delayStart) <= 5000){ //stops after 4 seconds
    for (int i = 0; i<28; i++) {
        pixels.setPixelColor(i, pixels.Color(255,0,0));
    }
    pixels.show();
    for (int i = 0; i<28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
   }
   pixels.show();
  }

  
  //Loading Bar 
 // while ((millis() - delayStart) <= 7500) {//stops at 9 second mark

    for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.show();
      delay(50);
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.show();
      delay(50);
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.show();
      delay(50);
  }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.show();
      delay(50);
  }

 //Quick Bounce x2.5
 //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }

  //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
  
  //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
       //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
     //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
     //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
   
   //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
   //Rainbow drip
    for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      delay(10);
    }
    pixels.show();

    for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      delay(10);
    }
    pixels.show();

     for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      delay(10);
    }
    pixels.show();

     for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      delay(10);
    }
       for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.show();
      delay(50);
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.show();
      delay(50);
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.show();
      delay(50);
  }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.show();
      delay(50);
  }

 //Quick Bounce x2.5
 //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }

  //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
  
  //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
       //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
     //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
     //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }
   
   //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
    }

 

}
