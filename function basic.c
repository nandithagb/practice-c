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
int rectarea(intlen,intwid)
{
    int area=len*wid;
    return(area);
}