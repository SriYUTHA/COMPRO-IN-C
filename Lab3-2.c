#include <stdio.h>
int main()
{
    float num_1;
    float num_2;
    float num_3;
    float num_4;
    scanf("%f%f%f%f", &num_1, &num_2, &num_3, &num_4);
    float sum = num_1 + num_2 + num_3 + num_4;
    float average = sum/4;
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", average);
    return 0;
}
