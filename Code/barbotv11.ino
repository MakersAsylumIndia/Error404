// Motor definitions: {EN pin, IN1, IN2}

  int in1motor1 = 26;
  int in2motor1 = 27;
  int enmotor1 = 14;

  int in1motor2 = 32; 
  int in2motor2 = 33;
  int enmotor2 = 25;

  int in1motor3 = 17;
  int in2motor3 = 16;
  int enmotor3 = 4;

  int in1motor4 = 21;
  int in2motor4 = 22;
  int enmotor4 = 23;

  int in1motor5 = 19;
  int in2motor5 = 5;
  int enmotor5 = 18;

  int in1motor6 = 15;
  int in2motor6 = 13;
  int enmotor6 = 12;
  


//motor 1 is mango
//motor 2 is pineapple
//motor 3 is lemon
//motor 4 is cold water
//motor 5 is sprite
//motor 6 is orange



void setup() {
  Serial.begin(115200); 
  delay(3000);  
  Serial.println("Welcome to the BarBot! Choose your drink by typing a number:");
  Serial.println("1 - Tropical Sunrise");
  Serial.println("2 - Citrus Splash");
  Serial.println("3 - Sunset Cooler");
  Serial.println("4 - Pineapple Citrus Pop");
  Serial.println("5 - Mango Pine Fizz");
  Serial.println("6 - Island Breeze");

    pinMode(in1motor1, OUTPUT);
    pinMode(in2motor1, OUTPUT);
    pinMode(enmotor1, OUTPUT);

    pinMode(in1motor2, OUTPUT);
    pinMode(in2motor2, OUTPUT);
    pinMode(enmotor2, OUTPUT);

    pinMode(in1motor3, OUTPUT);
    pinMode(in2motor3, OUTPUT);
    pinMode(enmotor3, OUTPUT);

    pinMode(in1motor4, OUTPUT);
    pinMode(in2motor4, OUTPUT);
    pinMode(enmotor4, OUTPUT);

    pinMode(in1motor5, OUTPUT);
    pinMode(in2motor5, OUTPUT);
    pinMode(enmotor5, OUTPUT);

    pinMode(in1motor6, OUTPUT);
    pinMode(in2motor6, OUTPUT);
    pinMode(enmotor6, OUTPUT);

}

void loop() {
   if (Serial.available() > 0) {
    int choice = Serial.parseInt();  // Read the number input

    if (choice > 0) {
      if (choice == 1) 
      { Serial.println("You chose Tropical Sunrise!");

        digitalWrite(in1motor1, LOW);  //40ml of mango from motor 1 is output
        digitalWrite(in2motor1, HIGH);
        digitalWrite(enmotor1, HIGH);
        delay(2000);
        digitalWrite(in1motor1, LOW); //motor 1 is turned off
        digitalWrite(in2motor1, LOW);
        digitalWrite(enmotor1, LOW);

        delay(1000);

        digitalWrite(in1motor6, LOW); //40ml of orange from motor 3 is output
        digitalWrite(in2motor6, HIGH);
        digitalWrite(enmotor6, HIGH);
        delay(800);
        digitalWrite(in1motor6, LOW); //motor 3 is turned off
        digitalWrite(in2motor6, LOW);
        digitalWrite(enmotor6, LOW);

        delay(1000);

        digitalWrite(in1motor4, LOW); //160ml of cold water from motor 4 is output
        digitalWrite(in2motor4, HIGH);
        digitalWrite(enmotor4, HIGH);
        delay(2000);
        digitalWrite(in1motor4, LOW); //motor 4 is turned off
        digitalWrite(in2motor4, LOW);
        digitalWrite(enmotor4, LOW);






      } else if (choice == 2) 
      {
        Serial.println("You chose Citrus Splash!");

        digitalWrite(in1motor3, LOW); //40ml of lemon from motor 3 is output
        digitalWrite(in2motor3, HIGH);
        digitalWrite(enmotor3, HIGH);
        delay(800);
        digitalWrite(in1motor3, LOW); //motor 3 is turned off
        digitalWrite(in2motor3, LOW);
        digitalWrite(enmotor3, LOW);

        delay(1000);

        digitalWrite(in1motor6, LOW); //40 ml orange is output
        digitalWrite(in2motor6, HIGH);
        digitalWrite(enmotor6, HIGH);
        delay(1000);
        digitalWrite(in1motor6, LOW); //motor 6 is turned off
        digitalWrite(in2motor6, LOW);
        digitalWrite(enmotor6, LOW);

        delay(1000);

        digitalWrite(in1motor5, LOW); //80 ml sprite is output
        digitalWrite(in2motor5, HIGH);
        digitalWrite(enmotor5, HIGH);
        delay(4000);
        digitalWrite(in1motor5, LOW); //motor 5 is turned off
        digitalWrite(in2motor5, LOW);
        digitalWrite(enmotor5, LOW);
      } 
      
      
      
      else if (choice == 3) 
      {
        Serial.println("You chose Sunset Cooler!");

        digitalWrite(in1motor3, LOW); //30 ml lemon is output
        digitalWrite(in2motor3, HIGH);
        digitalWrite(enmotor3, HIGH);
        delay(600);
        digitalWrite(in1motor3, LOW); //motor 3 is stopped
        digitalWrite(in2motor3, LOW);
        digitalWrite(enmotor3, LOW);

        delay(1000);

        digitalWrite(in1motor1, LOW); //30 ml mango is output
        digitalWrite(in2motor1, HIGH);
        digitalWrite(enmotor1, HIGH);
        delay(1500);
        digitalWrite(in1motor1, LOW); //motor 1 is stopped
        digitalWrite(in2motor1, LOW);
        digitalWrite(enmotor1, LOW);

        delay(1000);

        digitalWrite(in1motor4, LOW); //50ml cold water is output
        digitalWrite(in2motor4, HIGH);
        digitalWrite(enmotor4, HIGH);
        delay(1250);
        digitalWrite(in1motor4, LOW); //motor 4 is turned off
        digitalWrite(in2motor4, LOW);
        digitalWrite(enmotor4, LOW);

        delay(1000);

        digitalWrite(in1motor5, LOW); //50ml sprite is output
        digitalWrite(in2motor5, HIGH);
        digitalWrite(enmotor5, HIGH);
        delay(2500);
        digitalWrite(in1motor5, LOW); //motor 5 is turned off
        digitalWrite(in2motor5, LOW);
        digitalWrite(enmotor5, LOW);
      }
      
      
      
       else if (choice == 4) 
      {
        Serial.println("You chose Pineapple Citrus Pop!");

        digitalWrite(in1motor5, LOW); //80 ml sprite is output
        digitalWrite(in2motor5, HIGH);
        digitalWrite(enmotor5, HIGH);
        delay(4000);
        digitalWrite(in1motor5, LOW); //motor 5 is turned off
        digitalWrite(in2motor5, LOW);
        digitalWrite(enmotor5, LOW);

        delay(1000);

        digitalWrite(in1motor2, LOW); //40 ml of pineapple is output
        digitalWrite(in2motor2, HIGH);
        digitalWrite(enmotor2, HIGH);
        delay(800);
        digitalWrite(in1motor2, LOW); //motor 2 is turned off
        digitalWrite(in2motor2, LOW);
        digitalWrite(enmotor2, LOW);

        delay(1000);

        digitalWrite(in1motor3, LOW); //40 ml lemon is output
        digitalWrite(in2motor3, HIGH);
        digitalWrite(enmotor3, HIGH);
        delay(800);
        digitalWrite(in1motor3, LOW); //motor 3 is stopped
        digitalWrite(in2motor3, LOW);
        digitalWrite(enmotor3, LOW);

      }

        else if (choice==5)
        {
          Serial.println("You chose Mango Pine Fizz");

          digitalWrite(in1motor5, LOW); //80 ml sprite is output
          digitalWrite(in2motor5, HIGH);
          digitalWrite(enmotor5, HIGH);
          delay(4000);
          digitalWrite(in1motor5, LOW); //motor 5 is turned off
          digitalWrite(in2motor5, LOW);
          digitalWrite(enmotor5, LOW);

          delay(1000);

          digitalWrite(in1motor2, LOW); //40 ml of pineapple is output
          digitalWrite(in2motor2, HIGH);
          digitalWrite(enmotor2, HIGH);
          delay(800);
          digitalWrite(in1motor2, LOW); //motor 2 is turned off
          digitalWrite(in2motor2, LOW);
          digitalWrite(enmotor2, LOW);

          delay(1000);

          digitalWrite(in1motor1, LOW); //40 ml mango is output
          digitalWrite(in2motor1, HIGH);
          digitalWrite(enmotor1, HIGH);
          delay(2000);
          digitalWrite(in1motor1, LOW); //motor 1 is stopped
          digitalWrite(in2motor1, LOW);
          digitalWrite(enmotor1, LOW);
        }



        else if (choice==6)
        {
        Serial.println("You chose Island Breeze!");

        digitalWrite(in1motor2, LOW); //50 ml pineapple is output
        digitalWrite(in2motor2, HIGH);
        digitalWrite(enmotor2, HIGH);
        delay(1000);
        digitalWrite(in1motor2, LOW); //motor 3 is stopped
        digitalWrite(in2motor2, LOW);
        digitalWrite(enmotor2, LOW);

        delay(1000);

        digitalWrite(in1motor6, LOW); //50 ml orange is output
        digitalWrite(in2motor6, HIGH);
        digitalWrite(enmotor6, HIGH);
        delay(1500);
        digitalWrite(in1motor6, LOW); //motor 6 is stopped
        digitalWrite(in2motor6, LOW);
        digitalWrite(enmotor6, LOW);

        delay(1000);

        digitalWrite(in1motor4, LOW); //50ml cold water is output
        digitalWrite(in2motor4, HIGH);
        digitalWrite(enmotor4, HIGH);
        delay(1250);
        digitalWrite(in1motor4, LOW); //motor 4 is turned off
        digitalWrite(in2motor4, LOW);
        digitalWrite(enmotor4, LOW);

        delay(1000);

        digitalWrite(in1motor5, LOW); //50ml sprite is output
        digitalWrite(in2motor5, HIGH);
        digitalWrite(enmotor5, HIGH);
        delay(2500);
        digitalWrite(in1motor5, LOW); //motor 5 is turned off
        digitalWrite(in2motor5, LOW);
        digitalWrite(enmotor5, LOW);
      }
      

      } else {
        Serial.println("Invalid choice. Please type a number from 1 to 6.");
      }
    } 

  }

