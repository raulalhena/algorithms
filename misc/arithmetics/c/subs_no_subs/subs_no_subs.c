/**
 *
 *  Subtract without subtracting algorithm.
 *  Notice that there is not number control, so it's asumed that a is going to be
 *  bigger than b.
 *
 */

#include <stdio.h>

int	main(void)
{
  int a = 12;
  int b = 1;
  int baux = b;
  int result = 0;

  while (baux < a)
  {
	baux++;
	result++;
  }

  printf("Result of %d - %d = %d\n", a, b, result);
  return (0);
}


