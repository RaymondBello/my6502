
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

#include "config.h"
#include "Bus.h"
#include "R6502.h"

class Example : public olc::PixelGameEngine
{
public:
  Example()
  {
    sAppName = "R6502 Emulator";
  }

public:
  bool OnUserCreate() override
  {
    // Called once at the start, so create things here
    return true;
  }

  bool OnUserUpdate(float fElapsedTime) override
  {
    Clear(olc::BLACK);
    // called once per frame
    for (int x = 0; x < ScreenWidth(); x++)
      for (int y = 0; y < ScreenHeight(); y++)
        Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));

    FillRect(GetMouseX(), GetMouseY(), 1, 1);
    return true;
  }
};

int main() {

  // Print out current version
  printf("6502 Emulator v%d.%d.%d.%d by Ray B.\n", PROJECT_VERSION_MAJOR, PROJECT_VERSION_MINOR, PROJECT_VERSION_PATCH, PROJECT_VERSION_TWEAK);

  Example demo;
  if (demo.Construct(15, 10, 32, 32))
    demo.Start();

  return 0;
}
