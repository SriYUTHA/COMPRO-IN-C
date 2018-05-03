#include <stdio.h>
int main(){
    float a, b, c, t;
    scanf("%f %f %f", &a, &b, &c);
    if (a < b)
    {
        t = b, b = a, a =t;
    }
    if (b < c)
    {
        t = c, c = b, b =t;
    }
    if (a < b)
    {
        t = b, b = a, a =t;
    }
    printf("%.2f\n", b);
    return 0;
}