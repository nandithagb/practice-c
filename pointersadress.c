#include<stdio.h>
int main()
{
    int x[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("&x[%d]=%d",i,&x[i]);
    }
    printf("the address of x:%p",&x);
    return 0;
}