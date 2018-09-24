/*
 Rats Light
 
 This code controls 3 LED lights that symbolize when it is time to food our pet rats. For the first 20 hours, the green LED glows
 meaning they have recently been fed. Then for a couple of hours the yellow LED glows meaning they should be fed, and then finally the
 red LED turns on meaning we have to feed them right away.
 */

int ledGreen = 7;       // The digital pin attached to the GreenLED
int ledYellow = 6;      // The digital pin attached to the GreenLED
int ledRed = 5;         // The digital pin attached to the GreenLED
int led = 13;           // Pin attached to on-board LED or testing

int greenLength = 1;  // How many minutes will the green LED be on for
int yellowLength = 1;   // How many minutes will the yellow LED be on for

const int seconds = 1000*1; // Constant for seconds

// the setup routine runs once when you press reset:
void setup() {
  // declare pins to be outputs:
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // Turn the green pin on and wait for a while
  digitalWrite(ledGreen,HIGH);
  delay(greenLength*seconds);

  // Turn the yellow pin on and turn the green pin off and wait for a while
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledYellow,HIGH);
  delay(yellowLength*seconds);

  // Turn the red pin on and turn the yellow pin off and run until reset
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,HIGH);
  while(1);
}
