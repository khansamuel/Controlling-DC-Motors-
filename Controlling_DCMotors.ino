#define motor1Pin 9  // Change to the pin connected to the first motor's transistor base
#define motor2Pin 10 // Change to the pin connected to the second motor's transistor base

int motor1Speed = 0; // Variable to store motor 1 speed
int motor2Speed = 0; // Variable to store motor 2 speed

void setup() {
  pinMode(motor1Pin, OUTPUT);
  pinMode(motor2Pin, OUTPUT);
}

void loop() {
  // Set motor speeds (0-255)
  motor1Speed = 128; // Adjust as needed
  motor2Speed = 200; // Adjust as needed

  // Apply PWM to control motor speeds
  analogWrite(motor1Pin, motor1Speed);
  analogWrite(motor2Pin, motor2Speed);
}
