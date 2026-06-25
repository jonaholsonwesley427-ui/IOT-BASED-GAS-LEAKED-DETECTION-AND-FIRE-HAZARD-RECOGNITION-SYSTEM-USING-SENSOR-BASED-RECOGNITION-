#define BLYNK_TEMPLATE_ID "TMPL3NCLx8Cm1"
#define BLYNK_TEMPLATE_NAME "Gas or Flame Alert"
#define BLYNK_AUTH_TOKEN "ir6_VMv_AZoWSLXGIAB3SaW8lJlrX_Gv"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Ben";
char pass[] = "Jesus427";

#define MQ2_DOUT_PIN 32
#define FLAME_PIN 35

#define BUZZER_PIN 23
#define RED_LED_PIN 22

BlynkTimer timer;

// Notification flags
bool gasSent = false;
bool fireSent = false;

void checkSensors() {

  int flameValue = digitalRead(FLAME_PIN);
  int gasValue = digitalRead(MQ2_DOUT_PIN);

  Serial.print("Gas Value: ");
  Serial.print(gasValue);
  Serial.print(" | Flame Value: ");
  Serial.println(flameValue);

  bool gasDetected = (gasValue == HIGH);
  bool flameDetected = (flameValue == LOW);

  bool alarm = gasDetected || flameDetected;

  // Gas Detection
  if (gasDetected) {
    Serial.println("⚠️ Gas Detected!");

    if (!gasSent) {
      Blynk.logEvent("Gas_alert", "⚠️ Gas Detected!");
      Serial.println("Gas notification sent");
      gasSent = true;
    }
  } else {
    gasSent = false;
  }

  // Fire Detection
  if (flameDetected) {
    Serial.println("🔥 Flame Detected!");

    if (!fireSent) {
      Blynk.logEvent("Fire_alert", "🔥 Fire Detected!");
      Serial.println("Fire notification sent");
      fireSent = true;
    }
  } else {
    fireSent = false;
  }

  // Buzzer and LED Control
  digitalWrite(BUZZER_PIN, alarm ? HIGH : LOW);
  digitalWrite(RED_LED_PIN, alarm ? HIGH : LOW);
}

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Started");

  pinMode(MQ2_DOUT_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);

  Serial.println("Connecting to WiFi and Blynk...");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
  Serial.println("Connected!");

  
  timer.setInterval(2000L, checkSensors);
}

void loop() {
  Blynk.run();
  timer.run();
}