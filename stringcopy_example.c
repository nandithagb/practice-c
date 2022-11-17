#include<stdio.h>
int main()
{
    char str1[50],str2[50],temp[50];
    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("swapped strings:str1=%s\n str2=%s\n",str1,str2);
    return (0);

}
