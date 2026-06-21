int startValue = 5;

)
int ledPin = 13;

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  }
}

void setup() {
  // Configure the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");


  int count = startValue;

  // Run the loop as long as count is greater than 0
  while (count > 0) {
    Serial.print("Count: ");

  
    Serial.println(count);

    // 8. Flash the LED a dynamic number of times (e.g., matching the current count)
    flashLED(count);  // blink the LED
    delay(1000);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {}
