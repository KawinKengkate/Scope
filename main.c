#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  int i, N, sum = 0;
  int *a;

  N = argc - 1;
  a = (int*) malloc (sizeof(int)*N);

  for(i = 1; i < argc; i++)
  {
    a[i-1] = atoi(argv[i]);
    if(a[i-1]%2==1)
    {
      printf("%d\n", a[i-1]);
      sum += a[i-1];
    }
  }
  printf("Sum = %d", sum);
} 