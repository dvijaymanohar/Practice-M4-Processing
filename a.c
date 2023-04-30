
#include <stdio.h>

define(CURRENT_TIME, `syscmd(date)')

int main(int argc, char *argv)
{
  printf("Current Moment: %s\na", "CURRENT_TIME");
  return 0;
}
