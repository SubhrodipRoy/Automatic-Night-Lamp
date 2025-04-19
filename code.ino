// ------------------------------
// Automatic Lamp Control System
// ------------------------------
// This sketch uses a photoresistor (LDR) to detect ambient light levels.
// When the light falls below a threshold, it activates a relay
// to turn on a connected lamp or high-voltage circuit.
// ------------------------------

int relay = 2;      // Pin connected to the relay module
int ldr = A0;       // Analog pin connected to the LDR (photoresistor)
int threshold = 750; // Adjustable threshold value (0-1023) for darkness detection

void setup() {
  Serial.begin(9600);          // Start serial communication at 9600 bps (for debugging)
  pinMode(relay, OUTPUT);      // Set relay pin as output
  pinMode(ldr, INPUT);         // Set LDR pin as input
}

void loop() {
  int ldrValue = analogRead(ldr);  // Read current light level from the LDR
  Serial.println(ldrValue);        // Print LDR value to the Serial Monitor (for testing/debugging)

  // Compare LDR value with the threshold
  if (ldrValue < threshold) {
    digitalWrite(relay, HIGH);     // If it's dark, turn ON the relay (activate lamp)
  } else {
    digitalWrite(relay, LOW);      // If it's bright, turn OFF the relay (deactivate lamp)
  }

  delay(100); // Short delay for stability (optional)
}
