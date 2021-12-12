// Led Blink using IR Sensor

int led = 13; // initialize digital pin
int ir = 5; // initialize Ir sensor digital pin

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led as an output.
  pinMode(led, OUTPUT);
  pinMode(ir, INPUT); // initialize digital pin ir as an InPUT.
}

// the loop function runs over and over again forever
void loop() {

   int val = digitalRead(ir); // Read the Input from IR Sensor

   if(val == LOW){
    digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
   }
   else{
      digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
   }
}
