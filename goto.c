#include<stdio.h>
int main()
{
    int marks;
    again:
    printf("enter marks");
    scanf("%d",&marks);
    if(marks<0||marks>100)
    {
        printf("invalid marks");
        goto again;
    }
    if(marks>=40)
    printf("pass\n");
    else
    printf("fail\n");
    return 0;
}