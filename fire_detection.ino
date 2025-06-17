#define flamesensor 2
#define buz 13
#define led 8

void setup() { Serial.begin(9600); pinMode(flamesensor, INPUT); pinMode(buz, OUTPUT); pinMode(led, OUTPUT); digitalWrite(buz, LOW); digitalWrite(led, LOW);
}


void loop() {
int val = digitalRead(2); Serial.println(val); delay(500);

if (val == 0) { digitalWrite(buz, HIGH); digitalWrite(led, HIGH); delay(2000);
 
}
else
{


digitalWrite(buz,LOW); digitalWrite(led,LOW);
}
.}
