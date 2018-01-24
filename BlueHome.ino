char data = 0;
boolean  bln9;
boolean  bln10;
boolean  bln11;
boolean  bln12;
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

      bln9 = !bln9;
             digitalWrite(pin9, bln9);
    }
    else if (data == '3') {   //Light Upstairs
      bln10 = !bln10;
             digitalWrite(pin10, bln10);

    }
     else if (data == '2') {  //Light Downstairs
      bln11 = !bln11;
             digitalWrite(pin11, bln11);

    }
     else if (data == '1') {    //Fan Upstairs
      bln12 = !bln12;
             digitalWrite(pin12, bln12);

    }

  }

}
