#define E1 8
#define E2 9
void setup() {
for (int i=0;i<10;i++)
{
pinMode(i,OUTPUT);
}
}
char num[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void loop() {
for (char i=0;i<20;i++)
{
display2segment(i);
}
}
void display2segment(char temp)
{
for(char c=0;c<100;c++)
{
digitalWrite(E2,LOW);
digitalWrite(E1,HIGH);
PORTD= num[temp/10];
delay(4);
digitalWrite(E1,LOW);
digitalWrite(E2,HIGH);
PORTD= num[temp%10];
delay(4);
}
}
