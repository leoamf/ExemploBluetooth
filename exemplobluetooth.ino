String texto;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  texto = "";
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char c = Serial.read();
    delay(10);
    texto = texto + c;
    
  }
  
  else if(texto != "")
  {
    Serial.println("Recebi:" + texto);
    texto = "";
  } 
}
