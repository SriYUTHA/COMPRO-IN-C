#include <stdio.h>
int main()
{
    float price;
    int percent, num;
    scanf("%f %i %i", &price, &percent, &num);
    float cost1 = (price - (price*percent/100))*num;
    float cost2 = price * (num-(num/3));
    if (cost1 < cost2)
    {
        printf("Discount %i%%\n%.2f", percent, cost1);
    }
    else
    {
        printf("Buy 2 Get 1\n%.2f", cost2);
    }
    return 0;
}