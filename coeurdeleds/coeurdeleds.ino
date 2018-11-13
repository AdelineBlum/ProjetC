int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;
int LED6 = 8;
int LED7 = 9;

int LED8 = 10;
int LED9 = 11;
int LED10 = 12;

int incomingByte = 0; 
void setup() {
  // put your setup code here, to run once:
  for (int i = 3; i < 13; i++) {
pinMode(i, OUTPUT);
  }
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 3; i < 13; i++) {
digitalWrite(i, HIGH);
  }
  delay(500);
  for (int i = 3; i < 13; i++) {
    digitalWrite(i, LOW);
  }
  delay(500);
}
