//program to store information of a student using union.
#include<stdio.h>
void main()
{
union student
{
int rollno;
char name[50];
float avg;
};
union student s1;
printf("Enter the student roll no:\n");
scanf("%d",&s1.rollno);
printf("Enter the Student name:\n");
scanf("%s",&s1.name);
printf("Enetr student av:\n");
scanf("%f",&s1.avg);
printf("Student avg: %.2f\n",s1.avg);
}
