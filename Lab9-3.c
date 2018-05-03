#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[1],text[150];
    int len, count = 0;

   scanf("%[^\n]%*c", a);
   scanf("%[^\n]%*c", text);

    len = strlen(text);

    for(int i=0; i < len; i++) {
        if(tolower(text[i]) == tolower(a[0])){
            count++;
        }
    }

    printf("%d", count);
    return 0;

}
