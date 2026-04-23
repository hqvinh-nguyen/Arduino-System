#include <Wire.h>
#include <Stepper.h>
#include "Motor.h"
#include "MotorSystem.h"

volatile char lastCommand = '0';
String statusMsg = "Idle";
Motor Motor2(6, 8, 7, 9);
Motor Motor1(2, 4, 3, 5);
Motor Motor3(10, 12, 11, 13);
Motor* Motors[]={&Motor1, &Motor2, &Motor3};
MotorManager MotorCheck(Motors, 3);

void setup()
{
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);

  Serial.begin(115200);
}

void loop() 
{
  receiveEvent(lastCommand);
  if(lastCommand == '1'){
    Motor1.setRunning();
    statusMsg = "Motor 1 running";
  }
  if(lastCommand == '2'){
    Motor2.setRunning();
    statusMsg = "Motor 2 running";
  }
  if(lastCommand == '3'){
   Motor3.setRunning();
    statusMsg = "Motor 3 running";
  }
  MotorCheck.MotorRunning();
}

// Nhận dữ liệu từ master
void receiveEvent(int howMany) {
  if (Wire.available()) {
    lastCommand = Wire.read();
  }
}

// Gửi dữ liệu về master
void requestEvent() {
  if (lastCommand=='1'||lastCommand=='2')
    Wire.write('1');
  if (lastCommand=='3'||lastCommand=='4')
    Wire.write('2');
}