#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the co-ordinates of the tiangle of the form x1 y1 x2 y2 x3 y3\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float x;
  int a;
  x = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(x==0)
  {
    a=0;
  }
  else
  {
    a=1;
  }
  return a; 
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int a)
{
  if(a==0)
  {
    printf("the entered co-ordinates does not form a triangle\n");
  }
  else
  {
    printf("the entered co-ordinates will form a triangle\n");
  }
}
int main()
{
  int a;
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;  
}

