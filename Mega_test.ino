void setup() {
  Serial.begin(9600);    // Serial monitor
  Serial3.begin(9600);     // ESP8266 communication using hardware UART
  pinMode(8, OUTPUT);
}

void loop() {
  if (Serial3.available()) {
    String receivedData = Serial3.readStringUntil('\n');
    
    // Process received data
    //Serial.println("Received data from ESP8266: " + receivedData);
    if(receivedData == 'Fan 10 is OFF'){
      Serial.println("Hello There");
      digitalWrite(8, HIGH);
    }
  }
}
