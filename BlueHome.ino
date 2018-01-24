char data = 0;
boolean  bln1;
boolean  bln2;
boolean  bln3;
boolean  bln4;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;
void setup() {

  Serial.begin(9600);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);


}

void loop() {

  if (Serial.available() > 0) {

    data = Serial.read();
    Serial.print(data);
    if (data == '4') {    //Main Light Upstairs

      bln1 = !bln1;
             digitalWrite(pin9, bln1);
    }
    else if (data == '3') {   //Light Upstairs
      bln2 = !bln2;
             digitalWrite(pin10, bln2);

    }
     else if (data == '2') {  //Light Downstairs
      bln3 = !bln3;
             digitalWrite(pin11, bln3);

    }
     else if (data == '1') {    //Fan Upstairs
      bln4 = !bln4;
             digitalWrite(pin12, bln4);

    }

  }

}
