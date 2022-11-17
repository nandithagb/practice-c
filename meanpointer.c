#include<stdio.h>
#include<math.h>
int main()
{
    float a[10],sum=0,mean,var=0,sd;
    int x,i,n;
    float *p;
    p=a;
    printf("enter the number of elemnts");
    scanf("%d",&n);
    printf("enter the array elements");
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
        p++;
    }
    var=var/n;
   sd=sqrt(var);
   printf("%f=sum\n",sum);
    printf("%f=mean\n",mean);
     printf("%f=var\n",var);
     printf("%f=sd\n",sd);
     return 0;

    
    
}