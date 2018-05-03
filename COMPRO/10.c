#include <stdio.h>
 
int main()
{
    char text1;
    char text2;
    char text3;
    char text4;
    char text5;
    scanf(" %c", &text1);
    scanf(" %c", &text2);
    scanf(" %c", &text3);
    scanf(" %c", &text4);
    scanf(" %c", &text5);
    printf("%c\n", text1+1);
    printf("%c\n", text2);
    printf("%c\n", text3+1);
    printf("%c\n", text4);
    printf("%c\n", text5+1);
    return 0;
}