#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a+b > c && b+c > a && a+c > b)
        printf("Triangle is valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}