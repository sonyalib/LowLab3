#include <stdio.h>

#define MAX_VECTOR_SIZE 256
int vector_a[MAX_VECTOR_SIZE];
int vector_b[MAX_VECTOR_SIZE];

int vector_dot(int *va, int *vb, size_t n)
{
  size_t i;
  int sum = 0;
  for (i = 0; i < n; ++i)
    sum += va[i] * vb[i];
  return sum;
}

int read_vector(FILE *f, int *v, size_t n)
{
  size_t i;
  for (i = 0; i < n; ++i)
    if (!fscanf(f, "%d", &v[i]))
      return 0;
  return 1;
}

size_t read_input(int *va, int *vb)
{
  int n_input;
  size_t n;
  scanf("%d", &n_input);
  n = n_input;
  if (!read_vector(stdin, va, n))
    return 0;
  if (!read_vector(stdin, vb, n))
    return 0;
  return n;
}

int main()
{
  size_t n;
  int result;
  n = read_input(vector_a, vector_b);
  result = vector_dot(vector_a, vector_b, n);
  printf("%d\n", result);
  return 0;
}
