#include<stdio.h>
#include<math.h>
#define PI 3.148
int main()
{
    float num,deno,sum=0,term,x,degree;
    int i;
    printf("enter degree");
    scanf("%f",&degree);
    x=degree*(PI/180);
    sum=0;
    num=x;
    deno=1.0;
    i=1;
    do
    {
        term=num/deno;
        sum=sum+term;
        i=i+2;
        num=-num*x*x;
        deno=deno*i*(i-1);
    }while(fabs(term)>0.000001);
    printf("computed value of sin(%f)=%f\n",degree,sum);
    printf("value from library function is %f\n",sin(x));
    return 0;
}