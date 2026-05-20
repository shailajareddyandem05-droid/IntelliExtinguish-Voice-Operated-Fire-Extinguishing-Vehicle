void loop() 
{
  if(Serial.available() > 0)
  {
    String k =Serial.readString();
    if(k == "forward")
    {
      Serial.println("forward");
      digitalWrite(motor_pin1,HIGH);
      digitalWrite(motor_pin2,LOW);
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);
    }
if(k == "backward")
    {
      Serial.println("backward");
      digitalWrite(motor_pin1,LOW);
      digitalWrite(motor_pin2,HIGH);
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,HIGH);
    }
   if(k == "right")
    {
Serial.println("backward");
      digitalWrite(motor_pin1,LOW);
      digitalWrite(motor_pin2,HIGH);
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);
      delay(3000);
      digitalWrite(motor_pin1,HIGH);
      digitalWrite(motor_pin2,LOW);
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);
    }
    if(k == "left")
    {
      Serial.println("backward");
      digitalWrite(motor_pin1,HIGH);
      digitalWrite(motor_pin2,LOW);
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,HIGH);
      delay(3000);
      digitalWrite(motor_pin1,HIGH);
      digitalWrite(motor_pin2,LOW);
      digitalWrite(motor_pin3,HIGH);
      digitalWrite(motor_pin4,LOW);
    }
if(k == "stop")
    {
      Serial.println("backward");
      digitalWrite(motor_pin1,LOW);
      digitalWrite(motor_pin2,LOW);
      digitalWrite(motor_pin3,LOW);
      digitalWrite(motor_pin4,LOW);
    }
    if(k == "pump on")
    {
      Serial.println("pump on");
      digitalWrite(Relay,HIGH);
    }
     if(k == "pump off")
    {
      Serial.println("pump on");
      digitalWrite(Relay,LOW);
    }
    if(k == "pump of")
    {
      Serial.println("pump on");
      digitalWrite(Relay,LOW);
    }
  }
