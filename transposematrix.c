#include<stdio.h>
int main()
{
    int r,c,temp,mat[4][4];
    printf("enter 4*4 matrix\n");
    for(r=0;r<4;r++)
     for(c=0;c<4;c++)
     scanf("%d",&mat[r][c]);
      printf("the matrix before transpose\n");
            for(r=0;r<4;r++){
               for(c=0;c<4;c++)
                  printf("%d ",mat[r][c]);
                  printf("\n");}
     for(r=0;r<4;r++)
     for(c=r+1;c<4;c++){
     temp=mat[r][c];
     mat[r][c]=mat[c][r];
     mat[c][r]=temp;}
        printf("the transposed matrix\n");
            for(r=0;r<4;r++){
               for(c=0;c<4;c++)
                  printf("%d ",mat[r][c]);
                  printf("\n");}
                  return 0;
     
}