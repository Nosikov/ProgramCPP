void setup() {
Serial.begin(9600); 

int16_t a=336;
//mul2(a);
Serial.println(a);
Serial.println(&a);


}

void loop() {  }

/*int16_t mul2(int16_t &n)
{
  n *=2;
  
  return n;
}
*/
