/*
*  The hardware consists of the following parts:
*    arduino nano
*    stepper driver
*    x Pushbutton switch
*
*  The connections between the NodeMCU board the the display are as follows:
*  Nano Pin   Function
*  --------------------------------------------------------------------
*   D2
*   D3        CAMERA SHUTTER
*   D4        CAMERA AF
*   D5        XYZ SENSOR
*   D6        LIGHT SENSOR
*   D7        SOUND SENSOR 
*   D8        SWITCHS (LIMITERS)  
*   D9
*   D10
*   D11
*   D12
*   D13
*   3V3
*   GND
*   A0        MS1
*   A1        MS2
*   A2        MS3
*   A3        STEPPER  EN  = LOW: enable motor; HIGH: disable motor: energysaving
*   A4        STEPPER  DIR
*   A5        STEPPER  STEPS
*   A6
*   A7
*/

/*
MS1 MS2 MS3 Microstep Resolution  Excitation Mode
L   L   L   Full Step               2 Phase           0  -- 1    2^0
H   L   L   Half Step               1-2 Phase         1  -- 2    2^1
L   H   L   Quarter Step            W1-2 Phase        2  -- 4    2^2
H   H   L   Eighth Step             2W1-2 Phase       3  -- 8    2^3
H   H   H   Sixteenth Step          4W1-2 Phase       7  -- 16   ??? 
*/
#define VERSION_HW "0.1"


// pin controllo motore
const short PIN_DIR     = A4;
const short PIN_STEP    = A5;
const short PIN_ENABLE  = A3;
const short PIN_MS1 = A0;
const short PIN_MS2 = A1;
const short PIN_MS3 = A2;

// pin trigger esterni
const short PIN_LIMITERS = 8;
const short PIN_SOUNDSENSOR = 7;
const short PIN_LIGHTSENSOR = 6;
const short PIN_xyzSENSOR = 5;

// pin fotocamera
const short PIN_SHUTTER = 3;
const short PIN_AF = 2;



void initialize_hw(void) {
  pinMode(PIN_DIR, OUTPUT);
  pinMode(PIN_STEP, OUTPUT);
  pinMode(PIN_ENABLE, OUTPUT);
  digitalWrite(PIN_ENABLE, HIGH);
  pinMode(PIN_LIMITERS, INPUT_PULLUP);
  pinMode(PIN_SHUTTER, OUTPUT);
  pinMode(PIN_AF, OUTPUT);
}
