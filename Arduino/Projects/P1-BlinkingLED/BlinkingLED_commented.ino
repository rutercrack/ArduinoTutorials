
// Blinking Led 

/* 
Description: Turn LED on and off every other second. 
*/

/* int defines the type of variable, in this lenguage we can deal with an "uncommon" type: binary.
We can see this is strongly typed, since it's based on C/C++ (I really hate those languages) */

int ledPin = 10;

/* Setup is the basic function code (main) that runs once when starting or restarting.
It's used to initialize variables, pin modes, libraries etc. */

void setup() {
  // pinMode: Function that sets the Mode that a pin is going to be used as. If the pin is digital then it can be used with OUTPUT or INPUT.
  pinMode(ledPin, OUTPUT);
}

/* Loop repeats the code inside of it as fast is it can. This is probably related to "frames" in motor codes that use the same functions, althought in this case
it might be related to ticks of cpu clocks or something like that. */
 
void loop() {
    // digitalWrite: Function that writes a voltage of 5V or 3.3V value into the pin if high, or, if stated to be Low, writes a 0V value into the pin (if output).
    digitalWrite(ledPin, HIGH);
    // Delay: Stops the current thread for an ammount of miliseconds.
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}

/*
Remember, if you want to use a pin that is set to be INPUT, then you should Read instead of write (digitalRead) (expected to be used in DIGITAL PINS).

digitalRead only has one argument or parameter: the Pin. This is because in arduino concepts, true is 5V or 3.3V and false is 0V.
digitalRead will return "true" (HIGH) or "false" (LOW) based on pin value.


Aditional Data related to THIS script:
Breadboard or Protobard: Connected in colummns.
Jumper M/M: Cable male to male.
Resistors: Not Polarized, used for limmiting flow of current (actually it should be voltage). You can see the resistance if
Leds: Are polarized, the large side of the pin and the shortest inside the diode is the positive side.
*/
