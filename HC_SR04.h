/***************************************************************
   HC-SR04 function definitions - by Jmarquette14 / ChatGPT
   *************************************************************/

#include "Arduino_SensorKit.h"

#ifdef HC_SR04_H
  // Définir les broches pour le HC-SR04
  #define TRIGGER_PIN 5
  #define ECHO_PIN 4
#endif

// Prototypes des fonctions
void initHC_SR04();
float getDistance();
