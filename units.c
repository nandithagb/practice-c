#include<stdio.h>
int main()
{
    float units,total,charge;
    char name[20];
    printf("enter the name");
    scanf("%s",name);
    printf("enters the unit consumed");
    scanf("%f",&units);
    if(units<0)
    {
        printf("units consumed cannot be neagtive");
        return (0);
    }
    if(units>=0&&units<=200)
    {
        total=units*0.8;
    }
    else if(units>201&&units<=300)
    {
        total=(200*0.8)+(units-200)*0.9;
    }
    else
    {
        total=(200*0.8)+(100*0.9)+(units-300)*1;
    }
    total=total+100;
    if(total>400)
    {
        total=total+total*0.15;
    }
    printf("electricity bill");
    printf("\n===================\n");
    printf("\n name=%s\n",name);
    printf("no of units:%2f\n",units);
    printf("total bill amount =%f",total);
    return 0;
}
