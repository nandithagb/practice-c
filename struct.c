#include <stdio.h>
struct student{
    int rollno;
    float m1,m2,m3,avg;
    char name[20];
};
int main()
{
   struct student s[10];
   int i,n;
   printf("enter the number of students");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("enter %d student details\n",i+1);
    printf("enter the roll number\n");
    scanf("%d",&s[i].rollno);
    printf("enter the students name");
    scanf("%s",s[i].name);
    printf("enter the student marks");
    scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
   }
   for(i=0;i<n;i++)
   {
    s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
   }
   printf("the students more than avg\n");
   printf("roll\t name\t avg\n");
   printf("............\n");
   for(i=0;i<n;i++)
   {
    if(s[i].avg>=50)
    {
        printf("%d%f%s",s[i].rollno,s[i].avg,s[i].name);
    }
   }
   printf("the students more than avg\n");
   printf("roll\t name\t avg\n");
   printf("............\n");
   for(i=0;i<n;i++)
   {
    if(s[i].avg<=50)
    {
        printf("%d%f%s",s[i].rollno,s[i].avg,s[i].name);
    }
   }
   return 0;
}

