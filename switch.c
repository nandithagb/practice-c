#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    switch(num)
    {
        case 10:
        printf("number is equal to 10\n");
        break;
        case 50:
        printf("number is equal to 50\n");
        break;
        case 100:
        printf("number is equal to 100\n");
        break;
        default:
        printf("number is not equal to 10,50,100");
    }
    return 0;
}