#include <stdio.h>
int main(){
    char text;
    scanf("%c", &text);
    if (text >= 65 && text <= 90)
    {
        printf("%c\n", text+32);
    }
    else if (text >= 97 && text <= 122){
        printf("%c\n", text-32);
    }
    else{
        printf("error\n");
    }
    return 0;
}