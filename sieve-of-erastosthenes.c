#include <stdio.h>

int main()
{
  unsigned int n, i;
  printf("For primes between 1 and n, enter n: ");
  scanf("%ud", &n);

  unsigned int P[n + 1];

  for (i = 2; i <= n; i++)
    P[i] = 0;

  i = 2;

  while (i <= n)
    {
      if (P[i] == 0)
	printf("%u ", i);

      for (int j = 1; i * j <= n; j++)
	P[i * j] = 1;

      i++;
    }

  printf("\n");

  return 0;
}
