void setup() {
  Serial.begin(9600);
 int s=1000 ;
 int w=5000;
 int d=7000;
 int e=500000-1000;
 int q=(e/3)*5000;
 int r=((e/5)-e/3)*7000;
 int a=((e-(e/3))-(e/5))*1000;
 int f=q+a+r;
 int v=(f/100)*5;
 int y=f-v;
  Serial.print(y);
  
  }
  
 
void loop() {
  
} 
