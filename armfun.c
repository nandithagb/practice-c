#include<stdio.h>
void arm (int);
int main()
{
    int num,res;
    printf("enter the number");
    scanf("%d",&num);
    arm(num);
    return 0;
}
void arm(int num)
{
    int temp,rem,sum=0;
     temp=num;
   while(temp!=0)
    {
        rem=temp%10;
        sum=(rem*rem*rem)+sum;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("it is a armstrong number");
    }
    else
    {
       printf("it is not  an armstrong number");
    }
}