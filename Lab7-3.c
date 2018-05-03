#include "stdio.h"
#include "math.h"
 
double perimeter(double x, double y, double z);
double area(double x, double y);
 
int main() {
    double a,b,c,ans1,ans2;
    scanf("%lf %lf", &a, &b);
    
    c = sqrt((a*a) + (b*b));
     
    ans1 = perimeter(a, b, c);
    ans2 = area(a, b);
     
    printf("Perimeter: %.2lf\n", ans1);
    printf("Area: %.2lf", ans2);
    return 0;
}
 
double perimeter(double x, double y, double z){
    return x+y+z;
}
 
double area(double x, double y){
    return 0.5*x*y;
}