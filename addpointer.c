#include<stdio.h>
int main()
{
    int i,x[6],sum=0;
    printf("enter the 6 numbers");
    for(i=0;i<6;i++)
    {
        
        scanf("%d",&x[i]);
       sum=sum+x[i];
        
    }
    printf("sum=%d",sum);
}