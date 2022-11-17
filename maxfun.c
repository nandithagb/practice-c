#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter 3 numbers");
    scanf("%d%d%d",x,y,z);
    printf("maximum=%d\n",maxz(maxz(x,y),z));
    return (0);
}
int max2(int a,int b)
{
    if(a>b)
    return (a);
    else return (b);
}