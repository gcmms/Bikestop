void inicializaFirebase(){
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //connect to firebase
}

void FirebaseRun(){
  n = Firebase.getInt("led");
  if (n == 1) {
    //Serial.println("Led On");
    Firebase.set("Call", "LED ON");
    r = Firebase.getInt("red");
    g = Firebase.getInt("green");
    b = Firebase.getInt("blue");
    define_led(r, g, b);

  } else {
    //Serial.println("Led Off");
    Firebase.set("Call", "LED OFF");
    define_led(0, 0, 0);
  }
}

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

void FirebaseStup(){
  String placa = Firebase.getString(WiFi.macAddress());
  if(placa == NULL) {
    String mac = WiFi.macAddress();
    Firebase.set(mac, "fc-led.local");
  } else {
    Serial.print("Achei :)");
  }

}
