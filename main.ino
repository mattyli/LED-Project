#include <FastLED.h>

// Global Constants 
#define numOfLED    300    // 60 LED per M x 5 M
#define dataPin     2      // not known yet
#define colorOrder  GRB
#define RED         [255,0,0]
#define BLUE        [0,0,255]
#define GREEN       [0,255,0]

CHSV leds[numOfLED];    // creating an array, will modify individual LEDs using this array
// remember, HSV color (hue, saturation, value/brightness)


// Helper Functions
void changeColorMode(int newColor, int newSat=255, int newBright=255){
    // change the color from one to another specified one
    for (int led = 0; led < numOfLED; led++){
        leds[led].setHSV(newColor, newSat, newBright)
    }
}// change whole LED strip color at once

// End of Helper Functions

// Main Program
void setup(){
    // initialize objects and variables
    FastLED.addLeds<NEOPIXEL, dataPin>(leds, numOfLED);        // Adding the LEDs by specifying the strip type, declared LED array, number of LEDs
}

void loop(){
    // check for user input (to change state)
    // display the correct color mode to the LEDs
    changeColorMode(223);
    FastLED.show();             // updating the current LED settings
    delay(500);                 // delay 500 ms = 0.5 s
}