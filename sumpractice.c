#include<stdio.h>
int addnum(int,int);
int main()
{
    int n1,n2,sum;
    printf("enter the two numbers");
    scanf("%d%d",&n1,&n2);
    sum=addnum(n1,n2);

    printf("sum=%d",sum);
    return 0;
}
int addnum(int a,int b)
{
    int result;
    result = a + b;
    return result;
}