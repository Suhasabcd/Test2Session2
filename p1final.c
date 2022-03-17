#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the cordinates of the form x1 y1 x2 y2\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
float squareroot(float x)
{
  float root;
  float guess=x/2;
  int i=1;
  while(i!=0)
  {
    guess = (guess+(x/guess))/2;
    if(guess==(guess+(x/guess))/2)
    {
      i=0;
    }   
  }
  root= guess;
  return root;
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  float x;
  x= (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  *distance = squareroot(x);
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the distance between the points (%.2f,%.2f) and (%.2f,%.2f) = %.2f",x1,y1,x2,y2,distance);
}

int main()
{
  float x,x1,x2,y1,y2,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
  
  
  
}
