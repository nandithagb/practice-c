#include<stdio.h>
int fun();
int main()
{
    int res,n;
    res=fun();
    printf("%d",res);
    return 0;
}
int fun()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    return n;
    
}