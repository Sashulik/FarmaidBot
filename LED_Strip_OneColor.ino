// color swirl! connect an RGB LED to the PWM pins as indicated
// in the #defines
// public domain, enjoy!

#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 3

#define FADESPEED 15     // make this higher to slow down

void setup() {
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

////White Color
//void loop() {
//analogWrite(REDPIN,255-255);
//analogWrite(GREENPIN,255-255);
//analogWrite(BLUEPIN,255-255);
//}

////Light Blue Color
//void loop() {
//analogWrite(REDPIN,255-0);
//analogWrite(GREENPIN,255-255);
//analogWrite(BLUEPIN,255-255);
//}

////Blue Color
//void loop() {
//analogWrite(REDPIN,255-0);
//analogWrite(GREENPIN,255-0);
//analogWrite(BLUEPIN,255-255);
//}

////Red Color
//void loop() {
//analogWrite(REDPIN,255-255);
//analogWrite(GREENPIN,255-0);
//analogWrite(BLUEPIN,255-0);
//}

////Green Color
//void loop() {
//analogWrite(REDPIN,255-0);
//analogWrite(GREENPIN,255-255);
//analogWrite(BLUEPIN,255-0);
//}

//Yellow Color
void loop() {
analogWrite(REDPIN,255-255);
analogWrite(GREENPIN,255-0);
analogWrite(BLUEPIN,255-255);
}

//void lights_on(int pino) {
//  int b;
//  // increment chosen RGB pin down
//  for (b = 255; b > -1; b--) {
//    analogWrite(BLUEPIN, b);
//    delay(FADESPEED);
//  }
//}
//
//void lights_off(int pino) {
//  int r;
//  // increment chosen RGB pin up
//  for (r = 0; r < 400; r++) {
//    analogWrite(pino, r);
//    delay(FADESPEED);
//  }
//}


//void loop() {
//delay(500);
//lights_off(REDPIN); //GREEN
//delay(500);
//lights_on(REDPIN); //GREEN
//delay(500);
//lights_off(GREENPIN); //RED
//delay(500);
//lights_on(GREENPIN); //RED
//delay(500);
//lights_off(BLUEPIN);  //YELLOW
//delay(500);
//lights_on(BLUEPIN);  //YELLOW
//}

//void loop() {
//delay(500);
//lights_off(REDPIN); //GREEN
//delay(500);
//lights_off(GREENPIN); //GREEN
//delay(500);
//lights_off(BLUEPIN); //RED
//delay(500);
//lights_on(REDPIN); //RED
//delay(500);
//lights_on(GREENPIN);  //YELLOW
//delay(500);
//lights_on(BLUEPIN);  //YELLOW
//}

//Notes:
//Light colors are as below (RED/GREEN/BLUE)
  //White - 0/0/0
  //Red - 






//void loop()
//{
//  int r, g, b;
////  lights_on(BLUEPIN);

  // fade from blue to violet
//      for (r = 0; r < 256; r++) {
//        analogWrite(REDPIN, r);
//        delay(FADESPEED);
//      }
 
//  // fade from violet to red
//  lights_off(BLUEPIN);
//    
  // fade from red to yellow
//  lights_on(REDPIN);
//} 
  // fade from yellow to green
//  for (r = 255; r > 0; r--)
  
  // fade from green to teal
//  for (b = 0; b < 256; b++)
//  {
//    analogWrite(BLUEPIN, b);
//    delay(FADESPEED);
//  }
//  
//  // fade from teal to blue
//  for (g = 255; g > 0; g--)
//  {
//    analogWrite(GREENPIN, g);
//    delay(FADESPEED);
//  }
//}
