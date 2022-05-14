# roomlights-arduino
Code for my arduino LED lights that will go in my room. 
I hope to finish this before the end of Summer of 2022, but we shall see.

Will first verify code using the online simulation software TinkerCAD and then proceed to physical trials.

## motivation
My cheap LED lights broke in the Fall so I decided that I would try to combine my coding skills and desire to improve the atmosphere in my room by
custom coding LED lights that are compatible with Arduino.

I bought them off Amazon.

## Materials
  1. Arduino Microcontroller (preferrably a wifi enabled one)
  2. WS2812B LED Strip - Individually addressable LEDs

## Goals
  1. Get them working
  2. Get cool random patterns
  3. Develop a webapp that would be able to control the LEDs
  4. Make it controllable with a remote control
  5. 3D-print housing for microcontroller and power sources
  6. try and do something with spotify

## Things I had to consider
Each LED draws approx. 60 mA of current, depending on the length of the line, there may be more LEDs per unit length.

May need to include capacitors and resistors.

For my particular model of strip:
  60 LEDs/ meter @ 5 meter roll = 300 LEDs
  300 LEDs * 60 mA/ LED = 18000 mA = 18 A of current

## Helpful Links
  1. <a>https://howtomechatronics.com/tutorials/arduino/how-to-control-ws2812b-individually-addressable-leds-using-arduino/</a>
  2. <a>https://github.com/FastLED</a>


## Notes
Color Selection:
    - There are 2 primary ways to select LED color: RGB and HSV
    - RGB: the simplest, integer values from 0-255 for the respective Red, Blue, Green fields
        - can set individual LED RGB values using dot notation
        - can use the setRGB function
    - HSV: determines the LED output via Hue, Saturation, Value
        - The Value field represents the Brightness

The LED strip:
    - GROUND = BLACK
    - POWER  = RED
    - DATA   = GREEN
        - Data pin can be any pin on the board, unlike when controlling single pins with PWM
    - WS2812B = Adafruit NEOPIXEL (use neopixel)

## Tasks
Patterns
  - define pattern that cycles from opposites from end-to-end of color 'spectrum infinitely'
  - define solid state colors
  - 