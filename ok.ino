int  get_voice_pin=0;
int output[]={0};
int input[]={0};

void setup() 
{
 Serial.begin(9600);
 for(int i=0;i<sizeof(output)/sizeof(output[0]);i++)
     pinMode(output[i],OUTPUT);
 for(int i=0;i<sizeof(input)/sizeof(input[0]);i++)
     pinMode(input[i],INPUT);
}
void loop() {
double voice=get_voice();
 
}
double get_voice(void)
{
  double get_voice=analogRead(get_voice_pin);
  return  get_voice;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ;
}


