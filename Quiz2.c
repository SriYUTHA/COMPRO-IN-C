#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, j, k;
    char input1[100][101];
    char word[101];
    while(1) {
        scanf("%[^\n] ", input1[i]);
        if(input1[i][0] == '-') break;
        i++;
    }
    char input2[101];
    scanf("%[^\n]", input2);
    int value = 0;
    for(j=0; j<strlen(input2); j++) {
        for(k=0; k<i; k++) {
            if(input2[j] == input1[k][0])
                value+=input1[k][2]-48;
        }
    }
    printf("%d", value);
    return 0;
}
