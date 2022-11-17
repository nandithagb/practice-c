#include<stdio.h>
int btod(int);
int main()
{
    int n,d;
    printf("enter the binary number");
    scanf("%d",&n);
    d=btod(n);
    printf("the decimal number is %d",d);
    return 0;
}
int btod(int bin)
{
    if(bin==0)
    return 0;
    else
    return(bin%10+btod(bin/10)*2);
}