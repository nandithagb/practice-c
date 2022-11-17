#include<stdio.h>
#include<math.h>
int main()
{
    float a[10],sum=0,var=0,sd,mean;
    int n,i;
    float *p;
    p=a;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the array of elements");
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
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        var=var+pow((*p-mean),2);
    }
    var=var/n;
    sd=sqrt(var);
    printf("sum=%f",sum);
     printf("var=%f",var);
      printf("mean=%f",mean);
      return 0;



}