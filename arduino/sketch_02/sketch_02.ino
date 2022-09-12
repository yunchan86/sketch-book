int val;
int ledpin=13;
void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  val=Serial.read();
//  if(val=='R')
//  {
//    digitalWrite(ledpin,HIGH);//点亮数字13
//    delay(1000);
//    digitalWrite(ledpin,LOW);//熄灭数字13
//    delay(1000);
//    Serial.println("Hello World!");//显示Hello World字符串
//  }
  
    digitalWrite(ledpin,HIGH);//点亮数字13
    delay(1000);
    digitalWrite(ledpin,LOW);//熄灭数字13
    delay(2000);
    //Serial.println("Hello World!");//显示Hello World字符串
}
