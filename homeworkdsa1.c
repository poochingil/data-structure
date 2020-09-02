#include <stdio.h>
#include <string.h>
struct student
{
    int rno;
    char name[1000];
    int m1; int m2; int m3;
    double a;
}record[100],t[100];
int main()
{
    int n,i,j;
    printf("Enter Number of students : ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter Name of student %d : ",(i+1));
        scanf("%s",record[i].name);
        printf("Enter Roll  Number : ");
        scanf("%d",&record[i].rno);
        printf("Enter marks in 3 Subjects of %s :\n",record[i].name);
        scanf("%d %d %d",&record[i].m1,&record[i].m2,&record[i].m3);
        record[i].a=(record[i].m1+record[i].m2+record[i].m3) /3.0;
    }
    for (i=0;i<n-1;i++)
    {
       for (j=0;j<n-1-i;j++)
       {
           if (record[j].a < record[j+1].a)
           {
               t[j] = record[j];
               record[j] = record[j+1];
               record[j+1] = t[j];
           }
       }
    }
    printf("\nRecord of students in ascending order of average marks :\n");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d.\nName : %s\nRoll Number : %d\nAverage Marks : %f\n",(i+1),record[i].name,record[i].rno,record[i].a);
    }
    return 0;
}
