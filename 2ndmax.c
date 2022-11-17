#include<stdio.h>
int main()
{
  int num,a[100],i,temp;
  printf("enter the number of elements");
  scanf("%d",&num);
  for(i=0;i<num;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<num;i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  printf("%d",a[num-2]);
  return (0);
}