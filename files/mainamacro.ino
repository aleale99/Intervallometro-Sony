/* mainasoft project : MainaMacro

serve per fare bla bla bla
*/

#include "configure_hw.h"  // configurazione pin Arduino e stepper
#include "configure_sw.h"  // costanti,flag e variabili
#include "limiters.h"  	// gestione limit switch
#include "BasicStepperDriver.h"     // controllo stepper


BasicStepperDriver stepper(MOTOR_STEPS, PIN_DIR, PIN_STEP, PIN_ENABLE);

//----------------------------------------------------------------
void setup() {
  Serial.Begin(115200)
  err_init_hw = initialize_hw();
  err_init_sw = initialize_sw();
  Serial.println()
  Serial.print("Mainamacro HW:" + VERSION_HW + " SW:" + VERSION_SW + " initialize completed")
}


//----------------------------------------------------------------
void loop()
{
  // azioni da fare nel loro ordine di flow
  limiters();
  //ext_triggers();
  //camera_action();
  //move();
}

