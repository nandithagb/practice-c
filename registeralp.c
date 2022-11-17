#include<stdio.h>
void fun()
{
    register char c;
    for(c='a';c<=122;c++)
    printf("%c\t",c);
}
int main()
{
    fun();
    return 0;
}