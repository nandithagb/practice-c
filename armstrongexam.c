#include<stdio.h>
int main()
{
    int num,temp,sum=0,rem;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=(rem*rem*rem)+sum;
        temp=temp/10;
    }
    if(num==sum)
    {
    printf("it is a armstrong number");
    }
    else
    {
        printf("it is not a armstrong number");
    }
    return 0;

}