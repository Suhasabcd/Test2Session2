#include<stdio.h> 
int input()
{
  int x;
  printf("Enter which digit of the fibonacci sequence is required\n");
  scanf("%d",&x);
  return x;
}
int find_fibo(int x)
{
  int fibo,front,back;
  if (x>2)
  {
    back=0;
    front=1;
    for(int i=0;i<x-2;i++)
    {
      fibo = back+front;
      back = front;
      front=fibo;
        
    }
  }
  else if(x==1)
  {
    fibo=0;
  }
  else
  {
    fibo=1;
  }
  return fibo;
}
void output(int x,int fibo)
{
  printf("the %d th digit of the fibonacci sequence is %d",x,fibo);
  
}
int main()
{
  int x,fibo;
  x=input();
  fibo=find_fibo(x);
  output(x,fibo);
  return 0;
}
  
