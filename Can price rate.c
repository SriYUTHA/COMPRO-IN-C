#include <stdio.h>
int main()
{
    float price, center, high;
    scanf("%f%f%f", &price, &center, &high);
    float redius = center/2;
    double volume = redius*redius*high*3.14159265359;
    double bml = price/volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf\n", bml);
    return 0;
}
