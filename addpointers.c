#include<stdio.h>
int main()
{
    float a[10],sum=0,mul;
    float *p;
    int i,n;
    p=a;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("array of elemnts are");
    for(i=0;i<n;i++)
    {
        scanf("%f",p);
        p++;
    }
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*p;
        p++;
    }
    p=a;
    
 
    
    printf("%f",sum);
       
 
    return 0;

}