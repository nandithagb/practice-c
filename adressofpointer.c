#include<Stdio.h>
int main()
{
    int x[4];
    int i;
    for(i=0;i<4;++i)
    {
        printf("&x[%d]=%p\n",i,&x[i]);

    }
    printf("address of array x:%d",x);
    return 0;
}