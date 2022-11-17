#include<stdio.h>
int main()
{
    int marks,sum=0,x;
    for(x=1;x<=6;x++)
    {
        printf("enter marks\n");
        scanf("%d",&marks);
        if(marks<0||marks>100)
        {
            printf("invalid marks\n");
            continue;
        }
        sum+=marks;
    }
    printf("sum of marks=%d\n",sum);
    return 0;
}