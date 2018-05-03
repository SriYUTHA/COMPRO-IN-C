#include <stdio.h>
int main(){
    double num1, num2;
    scanf("%lf,%lf", &num1, &num2);
    double sum = num1 + num2;
    double dif = num1 - num2;
    double mutiple = num1*num2;
    double quotient = num1/num2;
    printf("The sum of the given numbers : %f\n", sum);
    printf("The difference of the given numbers : %f\n", dif);
    printf("The product of the given numbers : %f\n", mutiple);
    printf("The quotient of the given numbers : %f\n", quotient);
}
