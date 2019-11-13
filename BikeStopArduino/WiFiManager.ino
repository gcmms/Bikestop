#include <WiFiManager.h> 

void WiFiManageStup(){
    WiFiManager wifiManager;
    wifiManager.autoConnect("BikeStop - Estação 01");
    Serial.println("Contenctando :)");
}

void WiFiStup(){
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  WiFiManage();
}
