#define VERSION_HW "0.1"


// pin controllo motore
const short PIN_DIR= 	 A3;
const short PIN_STEP = 	 A4;
const short PIN_ENABLE = A5;
const short PIN_MS0 = A0;
const short PIN_MS1 = A1;
const short PIN_MS2 = A2;

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