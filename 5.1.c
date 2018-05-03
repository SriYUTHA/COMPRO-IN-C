#include <stdio.h>
int main()
{
    int num, counter;
    counter = 1;
    scanf("%i", &num);
    while (counter != num+1)
    {
        printf("%i ", counter);
        counter += 1;
    }
    return 0;
}