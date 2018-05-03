#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    char text[450];
    int count=0,len,chr=0, words=0, line=0;
    while(count == 0) {
        scanf("%[^\n]%*c", text);
        len = strlen(text);
        for (int i = 0; i < len; ++i)
        {
            if(text[0] == '.'){
                count++;
            }

            if(text[i] == ' ') {
                words++;
            }
            if(isalpha(text[i]))
            {
                chr++;
            }
        }
                words++;
                line++;
    }
    printf("Char = %d, word = %d, line = %d", chr,words-1,line-1);
    return 0;
}
