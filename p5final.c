#include <stdio.h>
#include <math.h>
int input_array_size()
{
  int x;
  printf("Enter the nth digit\n");
  scanf("%d",&x);
  return x;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      a[i]=i;
    }
}

  void erotosthenes_sieve(int n,int a[n])
  {
   int i=2;
   while(i<=sqrt(n)) 
   {
     while(a[i] == 0) i++;
     for(int k = i+i; k < n ; k+=i)
       {
         
         a[k]=0;
         a[1]=0;
         
        }
     i++;
     }
  }

void output(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d,",a[i]);
      }
    }
}
int main()
{
  int x,a[x];
  x = input_array_size();
  init_array(x,a);
  erotosthenes_sieve(x,a);
  output(x,a);
  return 0;
}