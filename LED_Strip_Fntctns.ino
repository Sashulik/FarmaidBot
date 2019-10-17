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

//To test individual colors go to this site (https://www.rapidtables.com/web/color/blue-color.html) and type in the RGB values from there as the subtracted value below


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

//Blue Color
void loop() {
analogWrite(REDPIN,255-0);
analogWrite(GREENPIN,255-0);
analogWrite(BLUEPIN,255-255);
}

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

////Yellow Color
//void loop() {
//analogWrite(REDPIN,255-255);
//analogWrite(GREENPIN,255-255);
//analogWrite(BLUEPIN,255-0);
//}
