#include<stdio.h>
int max2(int a, int b)
{
    return (a>b?a:b);
}
int main()
{
    int n1,n2,n3,n4,max;
    printf("enter the 4 numbers");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    max=max2(n4,max2(n3,(max2(n1,n2))));
    printf("%d",max);
    return 0;

}