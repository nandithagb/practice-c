#include<stdio.h>
int main(){
int a[6]={1,22,3,4,5,6};
int* ptr;
ptr=&a[2];
printf("*ptr=%d\n",*ptr);
printf("*(ptr+1)=%d\n",*(ptr+1));
printf("*(ptr+2)=%d\n",*(ptr+2));
return 0;
}