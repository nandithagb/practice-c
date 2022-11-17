#include<stdio.h>
int fibo(int);
int main()
{
    int num,i;
    printf("enter the number of elements to print");
    scanf("%d",&num);
    fibo(num);
    for(i=0;i<num;i++)
    {
        printf("%d\t",fibo(i));
    }
}
int fibo(int num)
{
    if(num==0)
    return 0;
    if(num==1)
    return 1;
    else
    return (fibo(num-1)+fibo(num-2));
}