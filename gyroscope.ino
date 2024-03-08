#include "RDV_GY512.h"
GY_512 sensor = GY_512();

void setup(){
  sensor.sensor_init();
  Serial.begin(9600);

}

void loop(){

  Serial.print("Temp: "); 
  Serial.println(sensor.get_temperature()); 

  Serial.print("raw gyro: ");
  Serial.print(sensor.get_raw_gyro_x()); Serial.print(" ");
  Serial.print(sensor.get_raw_gyro_y()); Serial.print(" ");
  Serial.print(sensor.get_raw_gyro_z()); Serial.println(" ");

  Serial.print("gyro: ");
  Serial.print(sensor.get_gyro_x()); Serial.print(" ");
  Serial.print(sensor.get_gyro_x()); Serial.print(" ");
  Serial.print(sensor.get_gyro_x()); Serial.println(" ");

  Serial.print("raw acc: ");
  Serial.print(sensor.get_raw_accel_x()); Serial.print(" ");
  Serial.print(sensor.get_raw_accel_y()); Serial.print(" ");
  Serial.print(sensor.get_raw_accel_z()); Serial.print(" "); Serial.println();

  Serial.print("acc: ");
  Serial.print(sensor.get_accel_x()); Serial.print(" ");
  Serial.print(sensor.get_accel_y()); Serial.print(" ");
  Serial.print(sensor.get_accel_z()); Serial.println(" "); Serial.println();

  delay(1000);
}