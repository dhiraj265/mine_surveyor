int state = -1;

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
      state=Serial.read();
  }
  switch(state){
    case '0':
      //send data
      state=-1;
      break;
    case '1':
      //move front
      state=-1;
      break;
    case '2':
      //move left
      state=-1;
      break;
    case '3':
      //move right
      state=-1;
      break;
    case '4':
      //move back
      state=-1;
      break;
    case '5':
      //stop move
      state=-1;
      break;
  }
}
      
