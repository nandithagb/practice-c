#include<stdio.h>
int main(){
  int x,y;
  for(y=1;y<=5;y++)
  {
    for(x=1;x<=y;x++)
    {
      printf("%d\t",y);
    }
    printf("\n");
  }

  return 0;
}