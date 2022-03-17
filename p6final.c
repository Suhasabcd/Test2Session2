#include <stdio.h>
#include<string.h>
void input(char *a,char *b)
{
  printf("Enter the string\n ");
  scanf("%s",a);
  printf("Enter the substring");
  scanf("%s",b);
}
int find_index(char *a,char *b)
{
  int index = 0;
  for(int i=0;i<strlen(a);i++)
    {
        for(int j =0;j<strlen(b);j++)
          {
            if(a[i+j]==b[j])
            {
              index=index+1;
            }
            else
            {
              index=0;
            }
          }
        if(index==strlen(b))
        {
            return(i);
        }
      }
    return index;
    }
void output(char *a,char *b,int index)
{
  printf("%d",index);
}

int main()
{
  char a[50],b[50];
  int index;
  input(a,b);
  index = find_index(a,b);
  output(a,b,index);
}