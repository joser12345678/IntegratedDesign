# define TEMPPIN A0

int analogReading = 0;
float voltage = 0;
void setup() 
{
  pinMode(TEMPPIN,INPUT);                   // configure the analog pin A0 as an input
  Serial.begin(9600);                       // begin communications with Serial
}

void loop()                                 // displays a voltage reading from the thermistor approximately every second 
{
 analogReading = analogRead(A0);            // read the unscaled voltage from the pin
 voltage = (analogReading) * (5.0/1023.0);  // scaling the voltage 
 Serial.println(voltage);                   // print the scaled voltage reading
 delay(1000);                               // wait for one second
}
