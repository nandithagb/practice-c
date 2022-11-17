#include<stdio.h>
struct student
{
    int rollno;
    float m1,m2,m3,avg;
    char name[20];
};
int main()
{
    int i,n;
    struct student s[20];
    printf("enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("enter the roll number");
    scanf("%d",&s[i].rollno);
    printf("enter the marks of three subjects");
    scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
    printf("enter the student name");
    scanf("%s",s[i].name);
    }
    for(i=0;i<n;i++)
    {
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    }
    printf("the students who scored above average\n");
    printf("\t rollno\t name\t avg ");
    for(i=0;i<n;i++)
    {
        if(s[i].avg>=50)
        {
            printf("%s\n",s[i].name);
            printf("%d\n",s[i].rollno);
            printf("%f\n",s[i].avg);
        }
    }
     printf("the students who scored below average\n");
    printf("\t rollno\t name\t avg");
    for(i=0;i<n;i++)
    {
        if(s[i].avg<50)
        {
            printf("%s\n",s[i].name);
            printf("%d\n",s[i].rollno);
            printf("%f\n",s[i].avg);
        }
    }
    return 0;

}