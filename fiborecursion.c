#include<stdio.h>
int fibo(int n );
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",fibo(i));
    return 0;
}
int fibo(int n )
{
    if(n==1)
    return (0);
     if(n==2)
    return (1);
    else 
    return (fibo(n-1)+fibo(n-2));

    
}