void Motor_Pin_Setup();
void Step_Motor(int motor, boolean dir, int steps);

const int msiOnePin = 4;
const int enablePin = 6;
const int dirPinMOne = 3;
const int dirPinMTwo = 0;
const int dirPinMThree = 0;
const int stepPinMOne = 2;
const int stepPinMTwo = 9;
const int stepPinMThree = 10;
int xpos = 0, ypos = 0, zpos = 0;
int motorSpeed = 1000;
const int stepsPerRev = 200;
const int distPerRevF20 = 20;
const int distPerRevF8 = 8;

void setup() {
  //Setup stepper motors 1, 2, 3
  Motor_Pin_Setup();
  Step_Motor(1, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly Mikel:

}

void Motor_Pin_Setup(){
  int dirPin;
  int stepPin;

  //Microstep resolution setup (Half Step = 0, Full Step = 1)
  //Set the msi one pin (P4) for output
  pinMode(msiOnePin, OUTPUT);

  //Set the enable pin (P6) for output
  pinMode(enablePin, OUTPUT);
  
  //Motor One Setup
  //Set the direction pin (P3) for output
  pinMode(dirPinMOne, OUTPUT);
  //Set the stepper pin (P2) for output
  pinMode(stepPinMOne, OUTPUT);

  //Motor Two Setup
  //Set the direction pin (P3) for output
  pinMode(dirPinMTwo, OUTPUT);

  //Set the stepper pin (P2) for output
  pinMode(stepPinMTwo, OUTPUT);

  //Motor Three Setup
  //Set the direction pin (P3) for output
  pinMode(dirPinMThree, OUTPUT);

  //Set the stepper pin (P2) for output
  pinMode(stepPinMThree, OUTPUT);
}

void Step_Motor(int motor, boolean dir, int steps){
  switch(motor){
    case 1:
      //Write to the direction pin
      digitalWrite(dirPinMOne, dir);
      //Allow pin to stabilize
      delay(30);
      for(int i = 0; i < steps; i++){
        digitalWrite(stepPinMOne, HIGH);
        delayMicroseconds(motorSpeed);
        digitalWrite(stepPinMOne, LOW);
        delayMicroseconds(motorSpeed);
      }
    break;

    case 2:
  
    break;

    case 3:

    break;
  }
}

