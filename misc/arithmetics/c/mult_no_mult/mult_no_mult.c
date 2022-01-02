/**
 *
 * Multiply without multiplying algorithm.
 * Notice that there is no control of zero or negative numbers.
 *
 */

#include <stdio.h>

int	main(void)
{
  int a = 3;
  int b = 5;
  int baux = b;
  int result = 0;

  while (baux)
  {
    result += a;
    baux--;
  }

  printf("Result of %d * %d = %d\n", a, b, result);
  return (0);
}
