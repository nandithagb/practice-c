#include<stdio.h>
int main()
{
    int x;
    x=1;
    do
    {
        printf("%d %d\n",x,x*x);
        x++;
    }while(x<=20);
    return (0);
}