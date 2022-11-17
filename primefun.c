#include<stdio.h>
void prime(int);
int main()
{
    int n,res;
    printf("enter the number");
    scanf("%d",&n);
    prime(n);
    return 0;

}
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("the number is a prime");
    else
    printf("the number is not a prime");
}