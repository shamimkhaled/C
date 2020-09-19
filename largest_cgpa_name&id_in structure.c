#include <stdio.h>
struct student
{
    char student_name[50];
    int student_id;
    float cgpa;
} s[10];

int main()
{
    int i,n;
    struct student s[10];

    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n Students Information %d:\n",i+1);
        printf("\nEnter the student name: ");
        scanf("%s", s[i].student_name);

        printf("Enter the student id: ");
        scanf("%d", &s[i].student_id);

        printf("Enter the CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\n\n\n");
    float max;
    max=s[0].cgpa;
    for(i=0; i<n; i++)
    {
      if(max<s[i].cgpa){

        printf("Student Name: %s",s[i].student_name);
        printf("\nStudent Id: %d",s[i].student_id);
        printf("\nCGPA: %.2f",s[i].cgpa);
      }

    }

    return 0;
}
