String serialInput;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 2; i < 18;i++){
    pinMode(i, OUTPUT);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    serialInput = Serial.readString();
    serialInput.trim();
   
    if((serialInput == "J")||(serialInput == "j")){
      digitalWrite(2, !digitalRead(2));


      if(digitalRead(2) == HIGH){
        Serial.println("Pin J ON");
      }else{
        Serial.println("Pin J OFF");
      }
    }


    if((serialInput == "CO")||(serialInput == "co")){
      digitalWrite(3, !digitalRead(3));
     
      if(digitalRead(3) == HIGH){
        Serial.println("Pin CO ON");
      }else{
        Serial.println("Pin CO OFF");
      }
    }


    if((serialInput == "CE")||(serialInput == "ce")){
      digitalWrite(4, !digitalRead(4));
     
      if(digitalRead(4) == HIGH){
        Serial.println("Pin CE ON");
      }else{
        Serial.println("Pin CE OFF");
      }
    }


    if((serialInput == "OI")||(serialInput == "oi")){
      digitalWrite(5, !digitalRead(5));
     
      if(digitalRead(5) == HIGH){
        Serial.println("Pin OI ON");
      }else{
        Serial.println("Pin OI OFF");
      }
    }


    if((serialInput == "BO")||(serialInput == "bo")){
      digitalWrite(6, !digitalRead(6));
     
      if(digitalRead(6) == HIGH){
        Serial.println("Pin BO ON");
      }else{
        Serial.println("Pin BO OFF");
      }
    }


    if((serialInput == "BI")||(serialInput == "bi")){
      digitalWrite(7, !digitalRead(7));
     
      if(digitalRead(7) == HIGH){
        Serial.println("Pin BI ON");
      }else{
        Serial.println("Pin BI OFF");
      }
    }


    if((serialInput == "SU")||(serialInput == "su")){
      digitalWrite(8, !digitalRead(8));
     
      if(digitalRead(8) == HIGH){
        Serial.println("Pin SU ON");
      }else{
        Serial.println("Pin SU OFF");
      }
    }


    if((serialInput == "EO")||(serialInput == "eo")){
      digitalWrite(9, !digitalRead(9));
     
      if(digitalRead(9) == HIGH){
        Serial.println("Pin SO ON");
      }else{
        Serial.println("Pin SO OFF");
      }
    }


    if((serialInput == "AO")||(serialInput == "ao")){
      digitalWrite(10, !digitalRead(10));
     
      if(digitalRead(10) == HIGH){
        Serial.println("Pin AO ON");
      }else{
        Serial.println("Pin AO OFF");
      }
    }


    if((serialInput == "AI")||(serialInput == "ai")){
      digitalWrite(11, !digitalRead(11));
     
      if(digitalRead(11) == HIGH){
        Serial.println("Pin AI ON");
      }else{
        Serial.println("Pin AI OFF");
      }
    }


    if((serialInput == "II")||(serialInput == "ii")){
      digitalWrite(12, !digitalRead(12));
     
      if(digitalRead(12) == HIGH){
        Serial.println("Pin II ON");
      }else{
        Serial.println("Pin II OFF");
      }
    }


    if((serialInput == "IO")||(serialInput == "io")){
      digitalWrite(13, !digitalRead(13));
     
      if(digitalRead(13) == HIGH){
        Serial.println("Pin IO ON");
      }else{
        Serial.println("Pin IO OFF");
      }
    }


    if((serialInput == "RO")||(serialInput == "ro")){
      digitalWrite(14, !digitalRead(14));
     
      if(digitalRead(14) == HIGH){
        Serial.println("Pin RO ON");
      }else{
        Serial.println("Pin RO OFF");
      }
    }


    if((serialInput == "RI")||(serialInput == "ri")){
      digitalWrite(15, !digitalRead(15));
     
      if(digitalRead(15) == HIGH){
        Serial.println("Pin RI ON");
      }else{
        Serial.println("Pin RI OFF");
      }
    }


    if((serialInput == "MI")||(serialInput == "mi")){
      digitalWrite(16, !digitalRead(16));
     
      if(digitalRead(16) == HIGH){
        Serial.println("Pin MI ON");
      }else{
        Serial.println("Pin MI OFF");
      }
    }


    if((serialInput == "HLT")||(serialInput == "hlt")){
      digitalWrite(17, !digitalRead(17));
     
      if(digitalRead(17) == HIGH){
        Serial.println("Pin HLT ON");
      }else{
        Serial.println("Pin HLT OFF");
      }
    }
  }
}
