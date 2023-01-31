  #define in1 8
  #define in2 9
  int esikDegeri = 150;
  float sensorValue;
  void setup() 
  {
    Serial.begin(9600); 
    Serial.println("Gas sensor warming up!");
    delay(20000); 
    pinMode(in1, OUTPUT);  
    pinMode(in2, OUTPUT); 

  }
  void loop() 
  {
    sensorValue = analogRead(A0);

    if(sensorValue > esikDegeri)
  {
    digitalWrite(in1, HIGH); //4 milisaniye boyunca ileri yönlü hareket
    digitalWrite(in2,  LOW);  


  }
    else
  {
    digitalWrite(in2, HIGH); //4 milisaniye boyunca geri yönlü hareket 
    digitalWrite(in1,  LOW);  

  } 
  }


