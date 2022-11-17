#include<stdio.h>
int rectarea(int,int);
int main()
{
    int len,wid,area;
    printf("enter length and width of rectangle");
    scanf("%d%d",&len,&wid);
    area=rectarea(len,wid);
    printf("area=%d square unit\n",area);
    return (0);
}
int rectarea(int l,int w)
{
    int area= l *w;
    return(area);
}