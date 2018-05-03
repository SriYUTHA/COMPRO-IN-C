#include <stdio.h>
#include <ctype.h>
int main(){
    char text;
    scanf("%c", &text);
    if (islower(text)==0);
        text = toupper(text);
    switch (text)
    {
        case 'A':
            printf("Genius");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Try Harder");
            break;
        case 'D':
            printf("Very Bad");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}