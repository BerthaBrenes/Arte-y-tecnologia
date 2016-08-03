int motor_de = 10;//direccion derecha del motor
int motor_iz =11;//direccion izquierda del motor
void setup() {
  // put your setup code here, to run once:
pinMode(motor_de,OUTPUT);//define los motores como salida
pinMode(motor_iz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motor_de, HIGH);
  delay(1500);
  digitalWrite(motor_de,LOW);
  delay(1500);
   digitalWrite(motor_iz, HIGH);
  delay(1500);
  digitalWrite(motor_iz,LOW);
  delay(1500);

}
