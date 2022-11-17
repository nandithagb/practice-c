#include<stdio.h>
int main()
{
    int rem,rev=0,temp,num,count=0;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        count++;
        num/=10;
    }
    printf("%d",count);
    return 0;
}