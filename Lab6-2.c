#include "stdio.h"
#include "string.h"
int main() {
    int row1 ,col1;
    double num1[3][3];
    double num2[3][3];

    for(row1=0; row1<3; row1++) {
        for(col1=0; col1<3; col1++) {
            scanf(" %lf", &num1[row1] [col1]);
        }
    }

    for(row1=0; row1<3; row1++) {
        for(col1=0; col1<3; col1++) {
            scanf(" %lf", &num2[row1] [col1]);
        }
    }

    double matrix11 = (num1[0][0] * num2[0][0]) + (num1[0][1]*num2[1][0]) + (num1[0][2]*num2[2][0]);
    double matrix12 = (num1[0][0] * num2[0][1]) + (num1[0][1]*num2[1][1]) + (num1[0][2]*num2[2][1]);
    double matrix13 = (num1[0][0] * num2[0][2]) + (num1[0][1]*num2[1][2]) + (num1[0][2]*num2[2][2]);

    double matrix21 = (num1[1][0] * num2[0][0]) + (num1[1][1]*num2[1][0]) + (num1[1][2]*num2[2][0]);
    double matrix22 = (num1[1][0] * num2[0][1]) + (num1[1][1]*num2[1][1]) + (num1[1][2]*num2[2][1]);
    double matrix23 = (num1[1][0] * num2[0][2]) + (num1[1][1]*num2[1][2]) + (num1[1][2]*num2[2][2]);

    double matrix31 = (num1[2][0] * num2[0][0]) + (num1[2][1]*num2[1][0]) + (num1[2][2]*num2[2][0]);
    double matrix32 = (num1[2][0] * num2[0][1]) + (num1[2][1]*num2[1][1]) + (num1[2][2]*num2[2][1]);
    double matrix33 = (num1[2][0] * num2[0][2]) + (num1[2][1]*num2[1][2]) + (num1[2][2]*num2[2][2]);

    printf("A x B\n");
    printf("%.2lf %.2lf %.2lf\n", matrix11, matrix12, matrix13);
    printf("%.2lf %.2lf %.2lf\n", matrix21, matrix22, matrix23);
    printf("%.2lf %.2lf %.2lf\n", matrix31, matrix32, matrix33);
    return 0;
}
