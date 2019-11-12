#include <WiFiManager.h> 

void WiFiManage(){
    WiFiManager wifiManager;
    wifiManager.autoConnect("BikeStop - Estação 01");
    Serial.println("Contenctando :)");
}

void inicializeWiFi(){
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  WiFiManage();
}
