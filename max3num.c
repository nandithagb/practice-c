#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("enter 3 numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            max=n1;
        }
        else
        {
            max=n3;
        }
    }
    else
    {
        if(n2>n3)
        {
            max=n2;
        }
        else
        {
            max=n3;
        }
    }
    printf("the maximum number is %d\n",max);
    return 0;
}
