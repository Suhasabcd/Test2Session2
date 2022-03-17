#include<stdio.h>
#include <math.h>
typedef struct point{
float x,y;
}point;
typedef  struct line{
point p1,p2;
float distance;
}line;
point input_p()
{
  point a;
  printf("Enter the point of the form x y\n");
  scanf("%f %f",&a.x,&a.y);
  return a;
}
line input_l()
{
  line l;
  l.p1 = input_p();
  l.p2 = input_p();
  return l;
}
void find_lenght(line *l)
{
  l->distance =sqrt(pow(l->p1.x - l->p2.x,2)+pow(l->p1.y - l->p2.y,2));
}
void output(line l)
{
  printf("%f",l.distance);
}
int main()
{
  line l;
  l = input_l();
  find_lenght(&l);
  output(l);  
  return 0; 
}