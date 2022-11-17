#include<stdio.h>
int main()
{
    int rem,rev=0,num,temp;
    printf("enter the number");
    scanf("%d",&temp);
    num=temp;
    while(num!=0)
    {
        rem=num%10;
        rev=rev=rev*10+rem;
        num/=10;
    }
    if(temp==rev)
    {
        printf("the number is palindrome");
    }
    else
    printf("the number is not a palindrome");
    return 0;
}