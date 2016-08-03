#define motor1 11
#define motores2 10
#define led_del 3
#define led_tra 4
void setup() {  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (led_del, OUTPUT);
pinMode(led_tra, OUTPUT);
pinMode (motor1, OUTPUT);
pinMode (motores2, OUTPUT);
}

void loop() { // put your main code here, to run repeatedly:
digitalWrite(motores2, HIGH);
digitalWrite(led_del,HIGH);
delay(2000);
digitalWrite(motores2,LOW);
digitalWrite(led_del, HIGH);
delay(1000);
digitalWrite(motor1,HIGH);
digitalWrite(led_tra, HIGH);
delay(2000);
digitalWrite(motor1, LOW);
digitalWrite(led_tra, LOW);
delay(1000);
}
