int m1 = 3 ;
int m2 = 5 ;
int m3 = 6 ;
int m4 = 9 ;

int L ;
int R ;
char t ; 

void setup(){
  pinMode(m1 , OUTPUT);
  pinMode(m2 , OUTPUT);
  pinMode(m3 , OUTPUT);
  pinMode(m4 , OUTPUT);

  Serial.begin(9600);

}

void loop () {
 if(Serial.available() > 0){
    t = Serial.read();
 }
 if (t == 'R'){
   digitalWrite(m1 , 1);
   digitalWrite(m2 , 0);
   digitalWrite(m3 , 0);
   digitalWrite(m4 , 1);
 }
 else if (t == 'L'){
   digitalWrite(m1 , 0);
   digitalWrite(m2 , 1);
   digitalWrite(m3 , 1);
   digitalWrite(m4 , 0);

 }
 else if (t == 'B'){
   digitalWrite(m1 , 0);
   digitalWrite(m2 , 1);
   digitalWrite(m3 , 0);
   digitalWrite(m4 , 1);

 }
 else if (t == 'F'){
   digitalWrite(m1 , 1);
   digitalWrite(m2 , 0);
   digitalWrite(m3 , 1);
   digitalWrite(m4 , 0);

 }
 else{
   digitalWrite(m1 , 0);
   digitalWrite(m2 , 0);
   digitalWrite(m3 , 0);
   digitalWrite(m4 , 0);

 }
}