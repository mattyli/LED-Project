#include <FastLED.h>

// Global Constants 
#define numOfLED 300    // 60 LED per M x 5 M
#define dataPin 0       // not known yet
#define RED     [255,0,0]
#define BLUE    [0,0,255]
#define GREEN   [0,255,0]

CRGB leds[numOfLED];    // creating an array, will modify individual LEDs using this array

// Helper Functions

void turnOff(){
    // turn off the LED lights
}

void changeColorMode(int[] newColor){
    // change the color from one to another specified one
}

void fadeAll(){
    // function to infinitely fade through all colors on the spectrum in a smooth manner
}

// End of Helper Functions

// Main Program
void setup(){
    // initialize objects and variables
}

void loop(){
    // check for user input (to change state)
    // display the correct color mode to the LEDs
}