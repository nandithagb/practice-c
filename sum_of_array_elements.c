#include<stdio.h>
int main()
{
int a[10],sum=0,num,i;
printf("enter the number of elemnts");
scanf("%d",&num);
printf("enter the array of elements");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<num;i++)
{
    sum=sum+a[i];
}
printf("the sum of array elemnts is %d",sum);
return 0;
}