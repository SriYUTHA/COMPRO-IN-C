#include "stdio.h"
#include "ctype.h"
#include "string.h"
int main() {
    int num , i, j,count=0;
    int start, stop;
    int box[100], round=0,len_box;
    scanf("%d %d", &start, &stop);

    for(i=start+1; i<=stop-1; i++){
        for(j=1; j <=i; j++){
            if(i % j  == 0){
            count++;
            }
        }

        if(count == 2){
            box[round] = i;
            round++;
            count =0;
        }else{
            count = 0;
        }
           }

        if(round != 0) {
        for(i=0; i<round; i++){
            printf("%d ", box[i]);
        }
        }else{
            printf("Null");
        }

    return 0;
}
