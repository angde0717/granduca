const int AIA = 3;
const int AIB = 4;
const int BIA = 5;
const int BIB = 6;
byte speed = 255;

void setup() {
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
}

void loop() {
  forward();
  delay(2000);
  backward();
  delay(2000);
  left();
  delay(2000);
  right();
  delay(2000);
}
void forward()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}
void backward()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}
void left()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}
void right()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0); 
  analogWrite(BIB, speed);
}
void up()
{
  speed++;
  if (speed > 255) speed=255;
  forward();
}
void down()
{
  speed--;
  if (speed > 120) speed=120;
  forward();
}
void stop()
{
  speed=200;
  backward();
  delay(200);
  speed=0;
  forward();
}
void turbo()
{
  speed=255;
  forward();
}
