#include <FastLED.h>

// Global Constants 
#define numOfLED    300    // 60 LED per M x 5 M
#define dataPin     2      // not known yet
#define colorOrder  GRB
#define RED         [255,0,0]
#define BLUE        [0,0,255]
#define GREEN       [0,255,0]

CRGB leds[numOfLED];    // creating an array, will modify individual LEDs using this array

// Helper Functions
void turnOff(){
    // turn off the LED lights
    for (int ind = 0; ind < numOfLED; ind++){
        leds[ind].setRGB(0,0,0);    // setting them to black
    }
}

void changeColorMode(int[] newColor){
    // change the color from one to another specified one
}

// End of Helper Functions

// Main Program
void setup(){
    // initialize objects and variables
    FastLED.addLeds<WS2812, dataPin, colorOrder>(leds, numOfLED);        // Adding the LEDs by specifying the strip type, declared LED array, number of LEDs
}

void loop(){
    // check for user input (to change state)
    // display the correct color mode to the LEDs

    FastLED.show();             // updating the current LED settings
    delay(500);                 // delay 500 ms = 0.5 s
}