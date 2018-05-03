#include "stdio.h"
int main() {
    int num,val,sum=0,one=1;
    for(int i=0;;){
        scanf("%d", &num);
        if(num != 0) {
        val = one % num;
        one = num;
        sum += val;
        }
        else{
            break;
        }
    }

    printf("%d\n",sum);
    return 0;
}
