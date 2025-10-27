// Buttons on pins 2–6 | Passive buzzer on pin 7
const int buttonPins[4] = {2, 3, 4, 5};  // Button input pins
const int noteFreqs[4]  = {221.63, 278.66, 339.63, 399.23};  // Notes: C4, D4, E4, F4
const int buzzerPin = 7;  // Buzzer output pin
void setup()
{
  for(int i = 0; i < 4; i++)
  {
    pinMode(buttonPins[i], INPUT_PULLUP);  // Buttons connected to GND
  }
  pinMode(buzzerPin, OUTPUT);
}
void loop()
{
  bool anyPressed = false;  // Track if a button is pressed
  for (int i = 0; i < 4; i++)
  {
    if(digitalRead(buttonPins[i]) == LOW)
    { // Button pressed
      tone(buzzerPin, noteFreqs[i]);  // Play corresponding tone
      anyPressed = true;
      break;  // Play only one note at a time
    }
  }
  if(!anyPressed)
  {
    noTone(buzzerPin);  // Silence when no button pressed
  }
  delay(20);  // Small delay for stability and debounce
}