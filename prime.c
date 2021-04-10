#include <stdio.h>

int is_prime(unsigned long n)
{
  unsigned long i;
  if (n <= 1)
    return 0;
  for (i = 2; i * i <= n; ++i)
    if (n % i == 0)
      return 0;
  return 1;
}

int main()
{
  unsigned long n;
  scanf("%lu", &n);
  puts(is_prime(n) ? "yes\n" : "no\n");
  return 0;
}
