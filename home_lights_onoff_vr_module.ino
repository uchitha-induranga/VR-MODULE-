/************************************************************* UCHITHA INDURANGA (HELON)************************************************************************************************
HRTE PROJECTS XD- YOUTUBE ( SUBSCRIBE)

*/
byte com = 0;


void setup() {

pinMode(4,OUTPUT);




Serial.begin(9600);

Serial.write(0xAA);

Serial.write(0x37);

delay(1000);

Serial.write(0xAA);

Serial.write(0x21);
}

void loop() {

  while(Serial.available()) {

  com = Serial.read();

  switch(com) {

     
      case 0x11:   //command 1 to lights  on
   delay(3000);  
    digitalWrite(4,HIGH);

       break;


      case 0x12:  //command 2 to lights off 
    delay(3000); 
    digitalWrite(4,LOW);
     
      break;

    
      
      case 0x13:  
 
    
      break;

  
     case 0x14: 
     
      break;

   
    
    case 0x15: 

    
      break;


  }
 }
}
