// C++ code
//
const int a = 4;
const int b = 3;
const int c = 8;
const int d = 9;
const int e = 10;
const int f = 5;
const int g = 6;
const int dp = 7;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  // Number 9
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);  
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, LOW);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
   digitalWrite(dp, LOW);
   delay(1000); // Wait for 1000 millisecond(s)
   // Number 8
   digitalWrite(e, HIGH);
   delay(1000); // Wait for 1000 millisecond(s)
  // Number 7
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, LOW);
   delay(1000); // Wait for 1000 millisecond(s)
   // Number 6
   digitalWrite(a, HIGH);
   digitalWrite(b, LOW);  
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH);
   delay(1000); // Wait for 1000 millisecond(s)
   // Number 5
   digitalWrite(e, LOW); 
   delay(1000); // Wait for 1000 millisecond(s)
   // Number 4
   digitalWrite(a, LOW);
   digitalWrite(b, HIGH);
   digitalWrite(d, LOW); 
   delay(1000); // Wait for 1000 millisecond(s)
  // Starting yellow
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
    // Number 3
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, LOW); 
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  //Number 2
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  //Number 1
  digitalWrite(a, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  // Number 0
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);  
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
}
