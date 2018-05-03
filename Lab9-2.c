#include <stdio.h>
#include <string.h>

int main() {
    int width, len_text, len_text1, a1, a2, b1, b2;
    char text[50], text1[40];

    scanf("%d\n%[^\n]\n%[^\n]", &width, &text, &text1);

    len_text = strlen(text);
    len_text1 = strlen(text1);

    a1 = (width - len_text) - 2;
    b1 = (width - len_text1) - 2;

    if(a1 % 2 != 0) {
        a2 = a1 / 2;
        a1 = (a1 / 2)+1;
    }else{
        a1 = a1 / 2;
        a2 = a1;

    }

    if(b1 % 2 != 0) {
        b2 = b1 / 2;
        b1 = (b1 / 2)+1;
    }else{
        b1 = b1 / 2;
        b2 = b1;

    }

    /* for line one */
    if (len_text == width || len_text == width-1 || len_text1 == width || len_text1 == width-1)
    {
        printf("*");
    }
    for(int i =0; i < width; i++) {
        printf("*");
    }
    /* for line two */
    printf("\n*");

    /* print white space */
    for(int i =0; i < a1; i++) {
        printf(" ");
    }
    printf("%s", text);
    for (int i =0; i < a2; ++i)
    {
        printf(" ");
    }
    printf("*");

    /* for line three */
    printf("\n*");

    /* print white space */
    for(int i =0; i < b1; i++) {
        printf(" ");
    }
    printf("%s", text1);
    for (int i =0; i < b2; i++)
    {
        printf(" ");
    }
    printf("*\n");

    /* for line four */
    if (len_text == width || len_text == width-1 || len_text1 == width || len_text1 == width-1)
    {
        printf("*");
    }
    for(int i =0; i < width; i++) {
        printf("*");
    }

}
