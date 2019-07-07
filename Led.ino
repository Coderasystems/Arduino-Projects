void setup()
{
pinMode(13,OUTPUT);
}
void loop()
{
DigitalWrite(13,High);
delay(1000);
DigitalWrite(13,LOW);
delay(1000);
}
