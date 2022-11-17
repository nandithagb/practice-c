#include<stdio.h>
int main()
{
    int x,y,z,p;
    for(x=0;x<9;x++)
    {
        for(y=0;y<20-x;y++)
        {
            printf(" ");
        }
        for(z=0;z<x;z++)
        {
            if(x==0||z==0) p=1;
            else
            p=p*(x-z)/z;
            printf("%4d",p);
           
        }
        printf("\n");
    }
    return 0;
}