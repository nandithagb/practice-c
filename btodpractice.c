#include<stdio.h>
int btod(int);
void main()
{
    int b,d;
    printf("enter the binary number");
    scanf("%d",&b);
    d=btod(b);
    printf("the decimal value of %d=%d\n",b,d);
}
int btod(int bin)
{
    if(bin==0)
    return 0;
    else
    return(bin%10+btod(bin/10)*2);    

}