void inicializaFirebase(){
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //connect to firebase
}

int n = 0;

void FirebaseRun(){
  n = Firebase.getInt("trancaVaga-1");
  if (n == 1) {
    Firebase.set("respostaVaga-1", "Trancada");


  } else {
    Firebase.set("respostaVaga-1", "destrancada");

  }
}



void FirebaseStup(){
  String mac = WiFi.macAddress();
  Firebase.set(mac, "bikestop-1.local");
}
