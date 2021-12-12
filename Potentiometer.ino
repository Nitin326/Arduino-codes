// Led Brightness control using potentiometer

int led = 13; // initialize digital pin
int A = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led as an output.
  pinMode(led, OUTPUT);
   // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

   int val = analogRead(A); // Read the Input from IR Sensor
   Serial.println(val);  // print value on serial moniter

   if(val > 700){
    analogWrite(led, 255); 
   }

   if( val > 500 && val < 700){
    analogWrite(led, 128); 
   }
   else{
      analogWrite(led, 0);  
   }
}
