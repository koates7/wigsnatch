#include <Adafruit_NeoPixel.h>


// pin on which Arduino is connected to the NeoPixel
int LEDPIN = 2;
int LEDPIN2 = 1;
//blue LEDS

// how many NeoPixels are attached to the Arduino
int NUMPIXELS = 28;
int NUMPIXELS2 = 17;

//flicker delay
unsigned long delayStart = 0; // the time the delay started
bool delayRunning = false;
bool rainbow = true;


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LEDPIN ,NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(NUMPIXELS2, LEDPIN2 ,NEO_GRB + NEO_KHZ800);


int delayval = 1000; //delay for half a second

void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels2.begin();
  //Blue Pin
  pinMode(4, OUTPUT);
  //Yellow Pin
  pinMode(5, OUTPUT);
  //Green Pin
  pinMode(6, OUTPUT);
  //Red Pin
  pinMode(7, OUTPUT);

  
  delayStart = millis();   // start delay
 // delayRunning = true; // not finished yet
}

void loop() {
  // put your main code here, to run repeatedly:
  /**
  delay(1000);              
  digitalWrite(13, LOW);   
  delay(1000); 
  **/ 
  
  /**Need 3 second delay from hitting upload 
  or wait until yellow light starts blinking**/
  //Intial flickering (4 seconds) 
  while ((millis() - delayStart) <= 5000){ //stops after 4 seconds
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH);   
    digitalWrite(6, HIGH); 
    digitalWrite(7, HIGH); 
    delay(50);
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);   
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW);
    delay(50);
    for (int i = 0; i<28; i++) {
        pixels.setPixelColor(i, pixels.Color(255,0,0));
        pixels2.setPixelColor(i, pixels2.Color(255,0,0));

    }
    pixels.show();
    pixels2.show();

    for (int i = 0; i<28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
   }
   pixels.show();
   pixels2.show();

  }

  
  //Loading Bar 
 // while ((millis() - delayStart) <= 7500) {//stops at 9 second mark

    for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels2.setPixelColor(i, pixels2.Color(0,0,255));

      pixels.show();
      pixels2.show();

      digitalWrite(4, HIGH);   
      delay(50);
      digitalWrite(4, LOW);   

    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels2.setPixelColor(i, pixels2.Color(0,255,0));

      pixels.show();
      pixels2.show();

      digitalWrite(6, HIGH);   
      delay(50);
      digitalWrite(6, LOW);   

    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels2.setPixelColor(i, pixels2.Color(255,0,0));

      pixels.show();
      pixels2.show();

      digitalWrite(7, HIGH);   
      delay(50);
      digitalWrite(7, HIGH);   

  }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels2.setPixelColor(i, pixels2.Color(255,255,0));

      pixels.show();
      pixels2.show();

      digitalWrite(5, HIGH);   
      delay(50);
      digitalWrite(5, LOW);   

  }

 //Quick Bounce x2.5
 //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels2.setPixelColor(i, pixels2.Color(0,0,255));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,255));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(4, HIGH);   
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(4, LOW);  
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels2.setPixelColor(i, pixels2.Color(255,255,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(255,255,0));
      pixels.show();
      pixels2.show();
      delay(25);
      digitalWrite(5, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(5, LOW);   

    }

  //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels2.setPixelColor(i, pixels2.Color(0,255,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,255,0));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(6, HIGH);   


    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(6, LOW);   
    }
  
  //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels2.setPixelColor(i, pixels2.Color(255,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(255,0,0));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(7, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(7, LOW);   

    }
       //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels2.setPixelColor(i, pixels2.Color(0,0,255));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,255));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(4, HIGH); 
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(4, LOW); 
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels2.setPixelColor(i, pixels2.Color(255,255,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(255,255,0));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(5, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(5, LOW);   

    }
     //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels2.setPixelColor(i, pixels2.Color(0,255,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,255,0));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(6, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(6, LOW);   

    }
     //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels2.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels2.setPixelColor(i, pixels2.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels2.Color(255,0,0));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(7, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(7, LOW);   

    }
   
   //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels2.setPixelColor(i, pixels2.Color(0,0,255));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,255));
      pixels.show();
      pixels2.show();

      delay(25);
      digitalWrite(4, HIGH); 
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels2.setPixelColor(i, pixels2.Color(0,0,0));
      pixels2.setPixelColor(27 - i, pixels2.Color(0,0,0));
      pixels.show();
      pixels2.show();

      //delay(25);
      digitalWrite(4, LOW); 
    }
   //Rainbow drip
    for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels2.setPixelColor(i, pixels2.Color(255,0,0));

      digitalWrite(7, HIGH);   
      delay(10);
      digitalWrite(7, LOW);   
    }
    pixels.show();
    pixels2.show();


    for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels2.setPixelColor(i, pixels2.Color(0,255,0));

      digitalWrite(6, HIGH);   
      delay(10);
      digitalWrite(6, LOW);   
    }
    pixels.show();
    pixels2.show();


     for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels2.setPixelColor(i, pixels2.Color(0,0,255));

      digitalWrite(4, HIGH); 
      delay(10);
      digitalWrite(4, LOW); 
    }
    pixels.show();
    pixels2.show();


     for (int i = 0; i < 28; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels2.setPixelColor(i, pixels2.Color(255,255,0));

      digitalWrite(5, HIGH);   
      delay(10);
      digitalWrite(5, LOW);   
    }
    
    pixels.show();
    pixels2.show();
    
    
    for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.show();
      digitalWrite(4, HIGH); 
      delay(50);
      digitalWrite(4, LOW); 
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.show();
      digitalWrite(6, HIGH);   
      delay(50);
      digitalWrite(6, LOW);   
    }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.show();
      digitalWrite(7, HIGH);   
      delay(50);
      digitalWrite(7, LOW);   
  }
  for(int i =0; i < 18; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.show();
      digitalWrite(5, HIGH);   
      delay(50);
      digitalWrite(5, LOW);   

  }

 //Quick Bounce x2.5
 //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      digitalWrite(4, HIGH); 
      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(4, LOW); 

    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
      digitalWrite(5, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(5, LOW);   

    }

  //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
      digitalWrite(6, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(6, LOW);   

    }
  
  //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
      digitalWrite(7, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(7, LOW);   

    }
       //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      digitalWrite(4, HIGH); 

      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      digitalWrite(4, LOW); 

      //delay(25);
    }
    
  //Bounce drip in yellow
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,255,0));
      pixels.show();
      delay(25);
      digitalWrite(5, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(5, LOW);   

    }
     //Bounce drip in green
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,255,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,255,0));
      pixels.show();
      delay(25);
      digitalWrite(6, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(6, LOW);   

    }
     //Bounce drip in red
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(255,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(255,0,0));
      pixels.show();
      delay(25);
      digitalWrite(7, HIGH);   

    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      //delay(25);
      digitalWrite(7, LOW);   

    }
   
   //Bounce drip in blue
  for (int i = 0; i < 14; i++) {
      pixels.setPixelColor(i, pixels.Color(0,0,255));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,255));
      pixels.show();
      digitalWrite(4, HIGH); 

      delay(25);
    }
  for (int i = 13; i >= 0; i--) {
      pixels.setPixelColor(i, pixels.Color(0,0,0));
      pixels.setPixelColor(27 - i, pixels.Color(0,0,0));
      pixels.show();
      digitalWrite(4, LOW); 

      //delay(25);
    }

 

}
