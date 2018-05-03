#include <stdio.h>
#include <string.h>

int main() {
    char txt[150];
    int len;
    scanf("%[^\n]", &txt);
    len = strlen(txt);
    for(int i =0; i < len; i++ ) {
        if(txt[i] != ' ') {
            printf("%c", txt[i]);
        }
    }
    return 0;
}
