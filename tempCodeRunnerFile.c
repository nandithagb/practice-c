#include<stdio.h>
int main()
{
    int base,exp,result=1;
    printf("enter the base number");
    scanf("%d",&base);
    printf("enter the expotential ");
    scanf("%d",&exp);
    while(exp!=0)
    {
        result*=base;
        --exp;
    }
    printf("answer=%d",result);
    return 0;
}