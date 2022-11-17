#include<stdio.h>
int main()
{
    int r,c,i,j,a[10][10],temp[10][102
    ];
    printf("enter the number of rows and coloms\n");
    scanf("%d%d",&c,&r);
    printf("enter the matrix elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the entered matrix is\n");
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
     printf("the transposed matrix is\n");
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