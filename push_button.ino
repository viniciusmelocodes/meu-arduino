int led = 2;
int botao = 3;
int pressionado = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  pressionado = digitalRead(botao);

  if (pressionado == HIGH) {
    digitalWrite(led, HIGH);
    delay(2000);
  } else {
    digitalWrite(led, LOW);
  }
}
