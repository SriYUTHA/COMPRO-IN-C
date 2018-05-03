#include <stdio.h>
int main(){
    float num;
    scanf("%f", &num);
    if (num <= 100 && num >= 80)
        printf("A\n");
    else if (num < 80 && num >= 70)
        printf("B\n");
    else if (num < 70 && num >= 60)
        printf("C\n");
    else if (num < 60 && num >= 50)
        printf("D\n");
    else if (num < 50 && num >= 0)
        printf("F\n");
    else
        printf("Out of Range\n");
    return 0;
}