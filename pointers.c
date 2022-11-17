#include<stdio.h>
int main()
{
    int n,*p;
    n=20;
    p=&n;
    printf("value of n=%d\n",n);
    printf("adress of n =%d\n",p);
    *p=40;
    printf("changed value of n =%d\n",n);
    printf("value of *p=%d\n",*p);
    n=80;
    printf("value stored at adress=%d\n",*p);
    return 0;
}