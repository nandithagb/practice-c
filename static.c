#include <stdio.h>
int func()
{
 static int k = 0;
 k++;
 return (k);
}
int main()
{
 int x, sum=0;
 for(x=1;x<=5;x++)
 sum+=func();
 printf("sum = %d\n", sum);
 return (0);
}