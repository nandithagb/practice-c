#include<stdio.h>
void swap(int n1,int n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int x=20;
    int y=30;
    printf("the numbers before swaping %d %d",x,y);
    swap(x,y);
    printf("the numbers after swaping");
    printf("%d%d",x,y);
    return 0;

}