 #include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define vidusCLK 44
#define vidusDT 42

#define labaisCLK 48
#define labaisDT 46

#define kreisaisCLK 52
#define kreisaisDT 50

int vidusCurrentCLK;
int vidusPreviousCLK;

int labaisCurrentCLK;
int kreisaisPreviousCLK;

int labaisCurrentCLK;
int kreisaisPreviousCLK;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(7, OUTPUT);
  pinMode (vidusCLK, INPUT);
  pinMode (vidusDT, INPUT);
  
  pinMode (labaisCLK, INPUT);
  pinMode (labaisDT, INPUT);

  pinMode (kreisaisCLK, INPUT);
  pinMode (kreisaisDT, INPUT);
  
  vidusPreviousCLK = digitalRead(vidusCLK);
  labaisPreviousCLK = digitalRead(labaisCLK);
  kreisaisPreviousCLK = digitalRead(kreisaisCLK);
  
  lcd.print("Rapid 2020");
  lcd.setCursor(0, 1);
  lcd.print("gatavs darbam");
  lcdd();
  pikst();
}

void loop() {
  /////////////////////////////////////////////////////////////////////////////////////////
  if (analogRead(A1) > 508 && analogRead(A1) < 518 && analogRead(A0) > 514) {
    Serial.write(7);
    lcd.print(7);
    delay(100);
    lcdd();
  }
  if (analogRead(A1) > 508 && analogRead(A1) < 518 && analogRead(A0) < 508) {
    Serial.write(8);
    lcd.print(8);
    delay(100);
    lcdd();
  }
  if (analogRead(A0) > 508 && analogRead(A0) < 518 && analogRead(A1) < 508) {
    Serial.write(10);
    lcd.print(10);
    delay(100);
    lcdd();
  }
  if (analogRead(A0) > 508 && analogRead(A0) < 518 && analogRead(A1) > 514) {
    Serial.write(9);
    lcd.print(9);
    delay(100);
    lcdd();
  }/////////////////////////////////////////////////////////////////////////////////////////////
  if (analogRead(A3) > 515 && analogRead(A3) < 525 && analogRead(A2) > 500) {
    Serial.write(11);
    lcd.print(11);
    delay(100);
    lcdd();
  }
  if (analogRead(A3) > 515 && analogRead(A3) < 525 && analogRead(A2) < 494) {
    Serial.write(12);
    lcd.print(12);
    delay(100);
    lcdd();
  }
  if (analogRead(A2) > 495 && analogRead(A2) < 505 && analogRead(A3) < 495) {
    Serial.write(13);
    lcd.print(13);
    delay(100);
    lcdd();
  }
  if (analogRead(A2 ) > 495 && analogRead(A2) < 518 && analogRead(A3) > 525) {
    Serial.write(14);
    lcd.print(14);
    delay(100);
    lcdd();
  }///////////////////////////////////////////////////////////////////////////////////////////
  if (analogRead(A5) > 520 && analogRead(A5) < 527 && analogRead(A4) > 519) {
    Serial.write(15);
    lcd.print(15);
    delay(100);
    lcdd();
  }
  if (analogRead(A5) > 520 && analogRead(A5) < 527 && analogRead(A4) < 510) {
    Serial.write(16);
    lcd.print(16);
    delay(100);
    lcdd();
  }
  if (analogRead(A4) > 512 && analogRead(A4) < 525 && analogRead(A5) < 512) {
    Serial.write(17);
    lcd.print(17);
    delay(100);
    lcdd();
  }
  if (analogRead(A4) > 512 && analogRead(A4) < 550 && analogRead(A5) > 525) {
    Serial.write(18);
    lcd.print(18);
    delay(100);
    lcdd();
  }
  vidusCurrentCLK = digitalRead(vidusCLK);
  if (vidusCurrentCLK != vidusPreviousCLK) {
    if (digitalRead(vidusDT) != vidusCurrentCLK) {
      Serial.write(1);
    } else {
      Serial.write(2);
    }
  }

  labaisPreviousCLK = labaisCurrentCLK;

  labaisCurrentCLK = digitalRead(labaisCLK);
  if (labaisCurrentCLK != labaisPreviousCLK) {
    if (digitalRead(labaisDT) != labaisCurrentCLK) {
      Serial.write(21);
    } else {
      Serial.write(22);
    }
  }

  kreisaisPreviousCLK = kreisaisCurrentCLK;

  kreisaisCurrentCLK = digitalRead(kreisaisCLK);
  if (kreisaisCurrentCLK != kreisaisPreviousCLK) {
    if (digitalRead(kreisaisDT) != kreisaisCurrentCLK) {
      Serial.write(23);
    } else {
      Serial.write(24);
    }
  }

  if (digitalRead(30) == 0) {
    Serial.write(4);
    lcdd();
    lcd.print(4);
    delay(200);
    lcdd();
  }
  if (digitalRead(32) == 0) {
    Serial.write(5);
    lcdd();
    lcd.print(5);
    delay(200);
    lcdd();
  }
  if (digitalRead(34) == 0) {
    Serial.write(6);
    lcdd();
    lcd.print(6);
    delay(200);
    lcdd();
  }
  if (digitalRead(40) == 0) {
    Serial.write(19);
    lcdd();
    lcd.print(19);
    delay(200);
    lcdd();
  }
  if (digitalRead(38) == 0) {
    Serial.write(20);
    lcdd();
    lcd.print(20);
    delay(200);
    lcdd();
  }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void lcdd() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Rapid 2020");
  lcd.setCursor(0, 1);
  lcd.print("Output:");
  lcd.setCursor(8, 1);
}
void pikst() {
  tone(7, 300);
  delay(500);
  tone(7, 500);
  delay(500);
  tone(7, 700);
  delay(500);
  tone(7, 900);
  delay(500);
  noTone(7);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(2000);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
  delay(20);
  digitalWrite(7, 1);
  delay(20);
  digitalWrite(7, 0);
}
