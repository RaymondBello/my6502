
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "config.h"
#include "Bus.h"
#include "R6502.h"


int main() {

  // Print out current version
  printf("6502 Emulator v%d.%d.%d.%d by Ray B.\n", PROJECT_VERSION_MAJOR, PROJECT_VERSION_MINOR, PROJECT_VERSION_PATCH, PROJECT_VERSION_TWEAK);

  // MAIN Program entry

  return 0;
}
