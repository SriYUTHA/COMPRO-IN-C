#include <stdio.h>
int main()
{
    int input;
    scanf("%i", &input);
    int day = input/60/60/24;
    int hours = (input/60/60)%24;
    int minute = (input/60)%60;
    int sec = input%60;
    printf("%i s = %i d %i h %i m %i s", input, day, hours, minute, sec);
    return 0;
}
