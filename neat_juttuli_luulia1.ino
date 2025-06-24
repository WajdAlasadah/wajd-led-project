// Define LED pins
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

void setup() {
  // Set LED pins as output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // Turn on LED 1
  digitalWrite(led1, HIGH);
  delay(500); // Wait 500 milliseconds
  digitalWrite(led1, LOW);

  // Turn on LED 2
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);

  // Turn on LED 3
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
}
