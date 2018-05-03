#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 
    char text[150];
    int len,count=0,words=1;
    scanf("%[^\n]", text);
    len = strlen(text);
 
    for (int i = 0; i < len; ++i)
    {
        if(text[i] == ' '){   
            words++;
        }
    }
 
    printf("%d words\n----\n", words);
    for(int i=0; i < len; i++) {
        if(text[i] != ' ' && i != len-1){
            printf("%c", tolower(text[i]));
            count++;
        }else{
            if(i == len-1){
                printf("%c", tolower(text[i]));
                count++;
            }
            if(i != len-1){
            printf(" : %d\n", count);
            count = 0;
            }
            else{
            printf(" : %d", count);
            count = 0;   
            }
            }
        }
 
    return 0;
}