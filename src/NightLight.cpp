#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

class NightLight
{
  private:
    Adafruit_NeoPixel strip;

  public:
    NightLight(int nb, uint8_t pin) 
    {
      strip = Adafruit_NeoPixel(nb, pin, NEO_GRB + NEO_KHZ800);
      strip.begin();
      strip.setBrightness(100);
      strip.show(); // Initialize all pixels to 'off'
    }

    // Fill the dots one after the other with a color
    void setColor(int r, int g, int b, uint8_t wait) 
    {
      for(uint16_t i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i, strip.Color(r, g, b));
        strip.show();
        delay(wait);
      }
    }
};
