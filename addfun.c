#include<stdio.h>
void adsub(int,int);
int main()
{
    int n1,n2;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    adsub(n1,n2);
}
void adsub(int n1,int n2)
{
     printf("sum of two numbers is %d\n",n1+n2);
     printf("the difference of two numbers is %d\n",n1-n2);
     return 0;
}