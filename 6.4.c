#include <stdio.h>
#include <string.h>
int main(){
    char txt[100];
    int len;
    scanf("%[^\n]", txt);
    len = strlen(txt);
    for (int i = len-1; i>=0; i--){
        printf("%c", txt[i]);
    }
    return 0;
}
