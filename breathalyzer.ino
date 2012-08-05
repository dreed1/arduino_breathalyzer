/**********************
Arduino Breathalyzer
Written by Dan Reed (dan@danreed.net)
8/3/12

BEER WARE LICENSE
Use it all you want, if you feel like it buy me a beer.
**********************/

int red = 11;
int green = 10;
int blue = 9;
int beerPin = 3;

int soberReading=520;

void setup(){
  Serial.begin(9600);  
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(beerPin, INPUT);
}

void loop(){
  int reading = (analogRead(beerPin)-soberReading)/1.5;
  if(reading<0){
    soberReading--;  
  }
  
  Serial.println(reading, DEC);
  if(reading>255){
    reading = 255;  
  }
  
  analogWrite(green, 255-reading);
  analogWrite(red, reading);
  
  delay(100);
}
