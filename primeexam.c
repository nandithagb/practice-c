#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("the number is  a prime number");
    }
    else
    {
        printf("the number is not  a prime number");
    }
    return 0;
}