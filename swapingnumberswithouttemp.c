#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the elemnts after swaping");
    printf("%d\n%d",a,b);
    return 0;
}