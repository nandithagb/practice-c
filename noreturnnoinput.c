#include<stdio.h>
void checkprime();
int main()
{
    checkprime();
    return 0;
}
void checkprime()
{
    int n,i,flag=0;
    printf("enter a positive integer");
    scanf("%d",&n);
    if(n==0||n==1)
    flag=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("%d is not a prime number",n);
    else
    {
        printf("%d is a prime number",n);
    }

}