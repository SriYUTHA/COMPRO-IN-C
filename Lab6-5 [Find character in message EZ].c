#include "stdio.h"
#include "ctype.h"
#include "string.h"
int main() {
    char text[301],box[301];
    char var, var1, var2;
    int len,i,count=0,num=0;

    scanf("%[^\n]s", &text[0]);
    scanf(" %c", &var);
    len = strlen(text);
    var1 = tolower(var);
    var2 = toupper(var);


    for(i=0; i < len; i++) {
        if(text[i] == var1 || text[i] == var2) {
            count++;
            box[num] = i+1;
            num++;
        }

    }
    if(count != 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, var);
        printf("Position: %d", box[0]);
        for(i=1; i < count; i++){
            printf(", %d", box[i]);
        }
        }
        else{
        printf("Not found.");
        }

    return 0;
}
