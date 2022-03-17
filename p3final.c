#include <stdio.h>
int input_number()
{
  int x;
  printf("enter the number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int z=0;
  for(int i=2;i<n;i++)
  {
    if (n % i==0)
    {
      z=1;
      break;
    }
    else
    {
      i=i;
    }
  }
  return z;
}
void output(int n, int prime)
{
  if (prime==0)
  {
    printf("%d is a prime number ",n);
  }
  else{
    printf("%d is not a prime number",n);
  }
}
int main()
{
  int n,prime;
  n=input_number();
  prime = is_prime(n);
  output(n,prime);
  return 0;
}
