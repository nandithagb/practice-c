#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,hcf,lcm;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    hcf=gcd(a,b);
    printf("the hcf of two numbers is %d\n",hcf);
    printf("the lcm of two numbers is %d\n",(a*b)/hcf);
    return 0;
}
int gcd(int a,int b)
{
    int rem;
    rem=a%b;
    if (rem==0)
    return (b);
    else
    return (gcd(b,rem));
}