#include<stdio.h>
void fun(int);
int main()
{
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    fun(n);
    return 0;
}
void fun(int n)
{
    printf("%d",n);
}