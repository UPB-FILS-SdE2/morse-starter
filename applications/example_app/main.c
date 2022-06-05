/* vim: set sw=2 expandtab tw=80: */

#include <stdio.h>
#include "morse.h"

int main(void) {
  printf ("Hello World!\r\n");
  display ('e', LED | SOUND);
  return 0;
}
