#include<stdio.h>
int rectarea(int l,int w);
int rectarea(int l,int w)
{
    int a=l*w;
    return (a);
}
int main()
{

int len,wid,area;
printf("enter length and width of rectangle");
scanf("%d%d",&len,&wid);
area=rectarea(len,wid);
printf("area=%d square unit\n",area);
return (0);
}



