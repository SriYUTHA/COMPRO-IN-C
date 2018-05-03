#include <stdio.h>
int main()
{
    float price, reduce, number;
    scanf("%f%f%f", &price, &reduce, &number);
    double cost = (price -(price*reduce/100))*number;
    printf("%.2lf", cost);
}
