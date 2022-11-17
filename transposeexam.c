#include<stdio.h>
int main()
{
    int i,j,temp[10][10],a[10][10],r,c;
    printf("rows and coloums of matrix a");
    scanf("%d%d",&r,&c);
   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("the matrix a is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           temp[j][i]=a[i][j];
        }
    }
    printf("the matrix ater transpose\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",temp[i][j]);
        }
        printf("\n");
    }
    return 0;

}