#include<stdio.h>
float intrest(int p,int t,float r)
{
    float i=p*t*r;
    return (i);
}
int main()
{
    float i=intrest(5000,4,0.07);
    printf("intrest=.%2f\n",i);
    return 0;
}