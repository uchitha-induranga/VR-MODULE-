byte com = 0;
int greenled = 4;
int redled = 5;
int blueled = 6;

void setup() {

pinMode(greenled,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(blueled,OUTPUT);



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

     
      case 0x11:   //command 1   on
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,HIGH);
    digitalWrite(blueled,HIGH); 
       break;


      case 0x12:  //command 2 to  off 
    digitalWrite(greenled,LOW);
    digitalWrite(redled,LOW);
    digitalWrite(blueled,LOW); 
      break;

    
      
      case 0x13:  //command 3 to green
     digitalWrite(greenled,HIGH);
      break;

  
     case 0x14:  //command 4 to red
   digitalWrite(redled,HIGH);
      break;

   
    
    case 0x15:  //command 5 to blue
    digitalWrite(blueled,HIGH); 
      break;


  }
 }
}
