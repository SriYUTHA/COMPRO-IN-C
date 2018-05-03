#include <stdio.h>
int main()
{
    int num, counter;
    counter = 0;
    scanf("%i", &num);
    while (counter != num)
    {
        printf("%i ", num);
        num--;
    }
    return 0;
}