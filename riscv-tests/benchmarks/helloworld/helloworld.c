#include <stdio.h>

volatile int trap_expected;

int main()
{
//  printf("Hello World\n");
  int i,j;
  i = 0xfadd1e00;
  for(j=0;j<100;j++);
  j = i++;
  return j;
}
