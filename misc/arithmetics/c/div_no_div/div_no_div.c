/**
 *
 * Division without division algorithm.
 * Notice that there is no control of zero or negative numbers or if b is greater than a.
 *
 */

#include <stdio.h>

int	main(void)
{
  int a = 15;
  int b = 3;
  int aux = a;
  int result = 0;

  while (aux)
  {
    result++;
    aux -= b;
  }

  printf("Result of %d * %d = %d\n", a, b, result);
  return (0);
}
