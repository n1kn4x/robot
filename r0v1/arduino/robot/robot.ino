#include <Servo.h> //Servo motor library
#include <NewPing.h> //Ultrasonic sensor function library

// Left engine pin definitions
const int ENGINE_LEFT_SPEED = 3;     //
const int ENGINE_LEFT_FORWARD = 2;   //
const int ENGINE_LEFT_BACKWARD = 4;  //

// Right engine pin definitions
const int ENGINE_RIGHT_SPEED = 6;    //
const int ENGINE_RIGHT_FORWARD = 5;  //
const int ENGINE_RIGHT_BACKWARD = 7; //

// Servo motor
const int SERVO_MOTOR_CONTROL = 8;   //
const int SERVO_MOTOR_POSITION_MIDDLE = 85; // In the current setup, forward facing value for middle

// Definititions for the sonar active sensor
#define SONAR_TRIGGER A1 //sensor pins - analog input 1
#define SONAR_ECHO A2 //analog input 2
#define maximum_distance 200
int last_sonar_measure = 0; // Global variable holding the last sonar query (distance in cm)


NewPing sonar(SONAR_TRIGGER, SONAR_ECHO, maximum_distance); //sensor function
Servo servo_motor; //servo name

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  
  // put your setup code here, to run once:
  pinMode(ENGINE_LEFT_SPEED, OUTPUT);
  pinMode(ENGINE_LEFT_FORWARD, OUTPUT);
  pinMode(ENGINE_LEFT_BACKWARD, OUTPUT);

  pinMode(ENGINE_RIGHT_SPEED, OUTPUT);
  pinMode(ENGINE_RIGHT_FORWARD, OUTPUT);
  pinMode(ENGINE_RIGHT_BACKWARD, OUTPUT);

  servo_motor.attach(SERVO_MOTOR_CONTROL);
  servo_motor.write(SERVO_MOTOR_POSITION_MIDDLE);

}

void loop() {
  // put your main code here, to run repeatedly:
  //for (int servo_counter = 80; servo_counter <= 90; servo_counter+=1) {
  //  servo_motor.write(servo_counter);
  //  Serial.println(servo_counter);
  //  delay(2000);
  //  
  //}

/*  
  servo_motor.write(50);
  delay(1000);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println(" cm");

  Serial.print("Servo motor: ");
  Serial.println(servo_motor.read());

  servo_motor.write(170);
  delay(1000);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println(" cm");
*/
}
