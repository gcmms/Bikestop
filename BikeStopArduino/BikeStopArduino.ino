/*******************************************************************************
 // Requer :
 Bibliotexa WiFi Managger
*********************************************************************************/
static const uint8_t D0 = 16;
static const uint8_t D1 = 5;
static const uint8_t D2 = 4;
static const uint8_t D3 = 0;
static const uint8_t D4 = 2;
static const uint8_t D5 = 14;
static const uint8_t D6 = 12;
static const uint8_t D7 = 13;
static const uint8_t D8 = 15;
static const uint8_t D9 = 3;
static const uint8_t D10 = 1;

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <ESP8266mDNS.h>
#include <ESP8266HTTPUpdateServer.h> //Biblioteca que cria o servico de atualizacão via wifi (ou Over The Air - OTA)

//Definicao do Firebase
#define FIREBASE_HOST "bikestop-usjt.firebaseio.com"
#define FIREBASE_AUTH "AIzaSyCo2RBpXJ7QiQBru64ItWBsdZvhdsIfEe4"

void setup() {
  inicializeWiFi();
  InicializaDNS();

}

void loop() { 
  loopNDS();
}
