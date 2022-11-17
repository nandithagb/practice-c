#include<stdio.h>
int fun(int);
int main()
{
    int n,res;
    printf("enter the number");
    scanf("%d",&n);
    res=fun(n);
    printf("%d",n);
    return 0;
}
int fun(int n)
{
    return n;
}