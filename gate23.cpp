// Define the input pins
int P = 2;
int Q = 3;

// Define the output pin
int X = 5;

// Code released under GNU GPL. Free to use for anything.

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(P, INPUT);
  pinMode(Q, INPUT);
  pinMode(X, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Read the values of P and Q
  int pValue = digitalRead(P);
  int qValue = digitalRead(Q);
  
  // Perform AND operation
  int result = !pValue && qValue;
  
  // Write the result to pin X
  digitalWrite(X, result);
  
  delay(1000); // Delay for 1 second
}
