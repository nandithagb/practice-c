#include<stdio.h>
int main()
{
  int x,y;
  for(y=5;y>=1;y--)
  {
    for(x=1;x<=y;x++)
    {
      printf("*\t");
    }
    printf("\n");
  }
  return 0;
}