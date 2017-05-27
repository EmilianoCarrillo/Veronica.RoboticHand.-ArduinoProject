
                       /* MARK VI - Sábado 21 de Mayo - Código completo */
                       /*     BRAZO: Flexión y extención                */
                       /*     ANTEBRAZO: Supinación ypronación          */
                       /*     DEDOS: Flexión y extensión de cada uno    */
                       
  //FUENTES:
//https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-arduino---v32/experiment-9-using-a-flex-sensor
//http://www.instructables.com/id/How-to-use-a-Flex-Sensor-Arduino-Tutorial/?ALLSTEPS

#include <Servo.h> 

//Para tilt/pan
#define START_CMD_CHAR '>'
#define END_CMD_CHAR '\n'
#define DIV_CMD_CHAR ','

       //Crear servos para controlar cada motor
      Servo pulgarMotor; 
      Servo indiceMotor;  
      Servo medioMotor;  
      Servo anularMotor; 
      Servo meniqueMotor;  
      Servo panServo;
      Servo tiltServo;

      int tiltVal = 90;
      int panVal =90;

      // sensoduino stuff
      String inText;
      float value0, value1, value2;



void setup() {
  
// Asignar a cada motor un pin DIGITAL
  pulgarMotor.attach(8);
  indiceMotor.attach(9);
  medioMotor.attach(10);
  anularMotor.attach(11);
  meniqueMotor.attach(12);
  
  panServo.attach(7);
  tiltServo.attach(6);
  
  Serial.begin(9600);
}



void loop() {
  
  //  Obtener el valor de cada sensor por nos pines ANALÓGICOS
  int pulgarSensor = analogRead(A0);
  int indiceSensor = analogRead(A1);
  int medioSensor = analogRead(A2);
  int anularSensor = analogRead(A3);
  int meniqueSensor = analogRead(A4);
    Serial.println(anularSensor);

//Serial.println(meniqueSensor);               //(Para ver los valores análogos de los sensores ya justar map)

// Corresponder el valor de cada sensor (Obtenidos arriba) a grados de 0 a 180
  int pulgarPos = map(pulgarSensor, 380, 320, 0, 180);
  pulgarPos = constrain(pulgarPos, 0, 180);
  int indicePos = map(indiceSensor, 400, 280, 180, 0);
  indicePos = constrain(indicePos, 0, 180);
  int medioPos = map(medioSensor, 420, 260, 180, 0);
  medioPos = constrain(medioPos, 0, 180);
  int anularPos = map(anularSensor, 420, 370, 0,180);
  anularPos = constrain(anularPos, 0, 180);
  int meniquePos = map(meniqueSensor, 310, 255, 0, 180);
  meniquePos = constrain(meniquePos, 0, 180);

//Mover a los servos dándoles el valor de su posición variable
  pulgarMotor.write(pulgarPos);
  indiceMotor.write(indicePos);
  medioMotor.write(medioPos);
  anularMotor.write(anularPos);
  meniqueMotor.write(meniquePos);

  /*----------------------------PAN/TILT (BRAZO Y ANTERAZO)---------------------------*/

  Serial.flush();
int inCommand = 0;
int sensorType = 0;
unsigned long logCount = 0L;

char getChar = ' '; //leer serial

// Esperar a data entrante
if (Serial.available() < 1) return; // si Serial está vacía, regresar a loop()

// parse incoming command comenzar flag
getChar = Serial.read();
if (getChar != START_CMD_CHAR) return; // si ningun command realiza flag, regresar a loop()

// parse incoming pin# y valores
sensorType = Serial.parseInt(); // ¿Qué tipo de sensor es?
logCount = Serial.parseInt(); // Leer el total de sensores
value0 = Serial.parseFloat(); // 1º valor del sensor si existe
value1 = Serial.parseFloat(); // 2º
value2 = Serial.parseFloat(); // 3º 


// Verificar el tipo de sensor. Si no es acelerometro(#1) ignorar lecturas
// sensorType Acelerómetro es 1

if (sensorType !=1) return;

panVal = value0; // value0 = X sensor reading
tiltVal = value1; // value1 = Y sensor reading

tiltVal = map(tiltVal, 10, -10, 0, 179); // Map Accelerometer Y value to tilt servo angle.
tiltServo.write(tiltVal);
delay(0);

panVal = map(panVal, -10, 10, 0, 179); // Map Accelerometer X value to pan servo angle.
panServo.write(panVal);
delay(0);

}

