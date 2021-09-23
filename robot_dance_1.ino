/*
  MotorControl v1.0
  This code example programs a sequence of movements into Arduino Romeo v2
  This example code is in the public domain.
*/
int E1 = 5;     //M1 Speed Control
int E2 = 6;     //M2 Speed Control
int M1 = 4;    //M1 Direction Control
int M2 = 7;    //M1 Direction Control
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize pins for the motor driver
  int i;
  for (i = 4; i <= 7; i++)
    pinMode(i, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  
  back_off(240, 120);
  delay(500);
  advance(240,120);
  delay(500);  
  turn_R(240,120);
  delay(3000);
  back_off(240,120);
  delay(500);
  advance(240,120);
  delay(500);
  turn_L(240,120);
  delay(3000);
}
//program functions with parameters, from https://wiki.dfrobot.com/Romeo_V2-All_in_one_Controller__R3___SKU_DFR0225_
void stop(void)                    //Stop
{
  digitalWrite(E1, LOW);
  digitalWrite(E2, LOW);
}
void advance(char a, char b)         //Move forward
{
  analogWrite (E1, a);     //PWM Speed Control
  digitalWrite(M1, HIGH);
  analogWrite (E2, b);
  digitalWrite(M2, HIGH);
}
void back_off (char a, char b)         //Move backward
{
  analogWrite (E1, a);
  digitalWrite(M1, LOW);
  analogWrite (E2, b);
  digitalWrite(M2, LOW);
}
void turn_L (char a, char b)            //Turn Left
{
  analogWrite (E1, a);
  digitalWrite(M1, LOW);
  analogWrite (E2, b);
  digitalWrite(M2, HIGH);
}
void turn_R (char a, char b)            //Turn Right
{
  analogWrite (E1, a);
  digitalWrite(M1, HIGH);
  analogWrite (E2, b);
  digitalWrite(M2, LOW);
}
/* Here you can add your own functions */
void dance1() {
  analogWrite(E1, 240);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(M1, LOW);
  delay(1000) ;                      // wait for a second
  digitalWrite(M1, HIGH);
  delay(1000) ;
  analogWrite(E1, 0);   // turn the LED on (HIGH is the voltage level)
}
//void dance2() {
//  analogWrite(E1, 120);   // turn the LED on (HIGH is the voltage level)
//  digitalWrite(M1, LOW);
//  delay(1000) ;                      // wait for a second
//  digitalWrite(M1, HIGH);
//  delay(1000) ;
//  analogWrite(E1, 0);   // turn the LED on (HIGH is the voltage level)
//}
