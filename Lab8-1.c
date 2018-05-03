#include <stdio.h>
#include <string.h>
 
int main() {
    struct student_info {
        char name[1000];
        char surname[1000];
        char sex[10];
        int age;
        char id[100];
        double gpa;
    }student;
 
    scanf("%s",student.name); 
    scanf("%s",student.surname); 
    scanf("%s",student.sex);
    scanf("%d",&student.age);
    scanf("%s",student.id);
    scanf("%lf",&student.gpa);
 
    if (strcmp(student.sex,"Male")==0)
    {
        printf("Mr %c %s (%d) ID: %s GPA %.2lf\n", student.name[0],student.surname,student.age,student.id,student.gpa);
    }
    else{
        printf("Miss %c %s (%d) ID: %s GPA %.2lf\n", student.name[0],student.surname,student.age,student.id,student.gpa);
    }
    return 0;
}