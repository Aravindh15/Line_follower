/*------ Arduino Line Follower Code----- */
/*-------definning Inputs------*/
#define LS 2      // left sensor
#define RS 3      // right sensor
#define CS 8
/*-------definning Outputs------*/
#define LM1 4       // left motor
#define LM2 5       // left motor
#define RM1 6       // right motor
#define RM2 7       // right motor
#define EA 9
#define EB 10
                                               // !=sense    

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(EA, OUTPUT);
  pinMode(EB, OUTPUT);
}
void loop()
{
  if (digitalRead(LS) && digitalRead(CS) && digitalRead(RS))  // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }

  if (digitalRead(LS) && digitalRead(CS) && !digitalRead(RS))  //TL
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }

  if (digitalRead(LS) && !digitalRead(CS) && digitalRead(RS))  // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }
  if (digitalRead(LS) && !digitalRead(CS) && !digitalRead(RS))  // EL
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }
  if (!digitalRead(LS) && digitalRead(CS) && digitalRead(RS))  // TR
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }
  if (!digitalRead(LS) && digitalRead(CS) && !digitalRead(RS))  //FW
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }
  if (!digitalRead(LS) && !digitalRead(CS) && digitalRead(RS))  //ER
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    analogWrite(EA, 150);
    analogWrite(EB, 150);
  }
  if (!digitalRead(LS) && !digitalRead(CS) && !digitalRead(RS))  // TR
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    analogWrite(EA, 150);
    analogWrite(EB, 150);

  }
}
