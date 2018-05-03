#include <stdio.h>
int main(){
    double high, width;
    scanf("%lf%lf", &high, &width);
    double area = 2*(high+width);
    printf("Perimeter of rectangle = %.4f units", area);
    return 0;
}
