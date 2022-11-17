#include<stdio.h>
int main()
{
  int a,b,n,c,i;
  printf("enter the number of terms\n");
  scanf("%d",&n);
  a=0;
  b=1;
  printf("%d\n%d\n",a,b);
  for(i=2;i<n;i++)
  {
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
  }
}