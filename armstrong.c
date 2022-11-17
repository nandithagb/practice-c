#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=(rem*rem*rem)+sum;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("it is a armstrong number");
    }
    else
    {
        printf("it is not armstrong number");
    }
    return 0;

}