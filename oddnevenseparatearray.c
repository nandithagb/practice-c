#include<stdio.h>
int main()
{
    int i,arr[100],odd[50],even[50],size,p,q;
    printf("enter the size of the array\t");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter the element %d\t",i+1);
        scanf("%d",&arr[i]);
    }
    p=0;
    q=0;
    for(i=0;i<size;i++)
    if(arr[i]%2==0)
    {
        even[q]=arr[i];q++;
    }
    else
    {
        odd[p]=arr[i];p++;
    }
    
    printf("\narray with odd numbers");
    for(i=0;i<p;i++)
    {
        printf("%d\n",odd[i]);
    }
    printf("\narray with even numbers");
    for(i=0;i<q;i++)
    {
        printf("%d\n",even[i]);
    }
    return 0;
}