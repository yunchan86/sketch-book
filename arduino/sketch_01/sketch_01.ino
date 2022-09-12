/**
  输入字符R，点亮熄灭数字，同时输出Hello World
*/

int val;
int ledpin=13;//定义数字接口13
void setup() {
  Serial.begin(9600);   //设置波特率为9600
  pinMode(ledpin,OUTPUT); //设置数字13口为输出接口
}

void loop() {
  val=Serial.read();//读取PC机发送给Arduino的指令或者字符
  if(val=='R')
  { //如果接收的是R字符
    digitalWrite(ledpin,HIGH);//点亮数字13
    delay(500);
    digitalWrite(ledpin,LOW);//熄灭数字13
    delay(500);
    Serial.println("Hello World!");//显示Hello World字符串
  }
}
