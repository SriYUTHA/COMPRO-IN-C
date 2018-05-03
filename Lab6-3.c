#include "stdio.h"
#include "string.h"
int main() {
    int row,col;
    double num[3][3];
    for(row=0; row<3; row++) {
        for(col=0; col<3; col++) {
            scanf(" %lf", &num[row] [col]);
        }
    }

    if(num[0][1] == 0 && num[0][2] == 0 && num[1][0] == 0 && num[1][2] == 0 && num[2][0] == 0 && num [2][1] == 0) {
        if(num[0][0] == num[1][1] && num[1][1] == num [2][2]) {
            printf("This is a scalar matrix");
        }
        else{
            printf("This is not a scalar matrix");
        }
    }else{
        printf("This is not a scalar matrix");
    }

    return 0;
}
