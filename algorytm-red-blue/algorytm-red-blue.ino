// napisz program który reguluje jasnosc czerwonej i niebieskiej diody
//D9 CZERWONA
//D11 NIEBIESKA
//ZWIEK JASN CZERW D6
//ZMN JASN D4
//ZWIEK NIEB D7
//ZMNIEJSZ D5
//CZERW I NIEB DIODA STEROWANA PWN
#define LED2R 9
#define LED2B 11
#define SW_LEFT 4
#define SW_RIGHT 7
#define SW_UP 6
#define SW_DOWN 5


//D6 DIODA SIWECI MOCNO
//D7 DIODA SWIECI SLABO
void setup() {
  // put your setup code here, to run once:
  pinMode(LED2R, OUTPUT);
  pinMode(LED2B, OUTPUT);
  pinMode(SW_LEFT, INPUT);
  pinMode(SW_UP, INPUT);
  pinMode(SW_DOWN, INPUT);
  pinMode(SW_RIGHT, INPUT);
}

void loop() {
  if (digitalRead(SW_UP) == HIGH) { // jeśli przycisk wciśnięty

    analogWrite(LED2R, 10);

  }
  else if ( digitalRead(SW_LEFT) == HIGH)
  {
    analogWrite(LED2R, 200);
  }
  else
  {
    analogWrite(LED2R, 0);

  }

}

//{
//  // put your main code here, to run repeatedly:
//  (digitalRead(SW_RIGHT) == HIGH) { // jeśli przycisk wciśnięty
//    digitalWrite(LED2: B, HIGH);
//  } else {
//    digitalRead(SW_DOWN) == LOW)
//digitalWrite(LED2: B, LOW); // jeśli nie
//  }
//
//}
