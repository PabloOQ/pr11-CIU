int countD = 1;
float freqMin = 100;
float freqMax = 500;
int period = 10;

void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
  float freq = ((sin(period*(countD*M_PI/180)) + 1)/2.0)*(freqMax - freqMin) + freqMin;
  
  digitalWrite(13, HIGH);
  delay(freq/2);
  digitalWrite(13, LOW);
  delay(freq/2);
  countD++;
  if (360 <= countD){
    countD = 0;
  }
}
