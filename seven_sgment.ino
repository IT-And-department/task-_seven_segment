const byte segTable[11] = {B0000,B0001,B0010,B0011,B0100,B0101,B0110,B0111,B1000,B1001,B1111};
   const int segpins[4]={13,12,11,10};
    const int segpins2[4]={9,8,7,6};
    const int segpins3[4]={5,4,3,2};

void setup() {
   for(int i=0; i<4; i++){
  pinMode(segpins[i],OUTPUT);
   pinMode(segpins2[i],OUTPUT);
   pinMode(segpins3[i],OUTPUT);
  }

}

void loop() {
   for(int i=0 ;i<=999 ; i++){
    
    show(i);
    delay(100);
   }
   delay(100);

}void show (int number){
  boolean segBit;
  
  int digit1= number/100;
   int digit2 =(number/10)%10;
    int digit3= number%10;
    
   for(int s=0 ; s<4 ; s++){
    segBit =bitRead(segTable[digit1],s);
    
   
   digitalWrite(segpins[s],segBit);
    
   }
  
     for(int s=0 ; s<4 ; s++){
    segBit =bitRead(segTable[digit2],s);
   
   digitalWrite(segpins2[s],segBit);
    
   }
    
    for(int s=0 ; s<4 ; s++){
    segBit =bitRead(segTable[digit3],s);
   
   digitalWrite(segpins3[s],segBit);
    
   }

   
}
