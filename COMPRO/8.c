#include <stdio.h>
 
int main()
{
    char name[30];
    char lastname[30];
    char id[30];
    int dates;
    int months;
    int years;
    float gpa;
    scanf("%s", name);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%i/%i/%i", &dates, &months, &years);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n", id);
    printf("DOB: %02i-%02i-%i\n", dates, months, years);
    printf("GPA: %.2f\n", gpa);
    return 0;
}