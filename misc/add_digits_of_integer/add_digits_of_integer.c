/**
 *
 * Add digits of an integer algorithm. Recursivity is used.
 *
 */

#include <stdio.h>

int	add_digits(int num)
{
  	int res = 0;

	if (num < 9)
	  return num;
	else
	  res += num % 10;
	return res + add_digits(num / 10);
}

int	main(void)
{
  int num = 246;

  printf("Result of add the digits of %d = %d\n", num, add_digits(num));
  return (0);
}
