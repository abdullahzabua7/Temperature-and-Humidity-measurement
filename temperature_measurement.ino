 #include <dht11.h>
#define DHT11PIN 4
int but = 2;

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
  pinMode(but,INPUT);
  Serial.println("To check Temperature & Humidity please press the button");
 
}

void loop()
{
 int butread = digitalRead(but);
 

  if (butread == 0){
      Serial.println();
    
      int chk = DHT11.read(DHT11PIN);
    
      Serial.print("Humidity (%): ");
      Serial.print((float)DHT11.humidity, 2);
      Serial.println("% ");
    
      Serial.print("Temperature : ");
      Serial.print((float)DHT11.temperature, 2);
      Serial.println("C \n");

      Serial.println("To check Temperature & Humidity please press the button");
  }

  delay(1000);
 

}
