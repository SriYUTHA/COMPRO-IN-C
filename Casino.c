#include <stdio.h>
#include <string.h>
int main() {
     
    char position,order[30];
    char glass[3] = {0,0,0};
    int len,i;
 
    scanf("%s",&position);    
    int swap;
 
    if(position == 'L'){
        glass[0] = 1;
    }else if(position == 'C'){
        glass[1] = 1;
    }else if(position == 'R'){
        glass[2] = 1;
    }
 
    scanf("%s", &order);
    len = strlen(order);
 
    for(i=0; i < len ; i++ ){
        if(order[i] == 'A'){
 
            swap = glass[0];
            glass[0] = glass[1];
            glass[1] = swap;
             
        }if(order[i] == 'B'){
 
            swap = glass[1];
            glass[1] = glass[2];
            glass[2] = swap;
 
        }if(order[i] == 'C'){
 
            swap = glass[0];
            glass[0] = glass[2];
            glass[2] = swap;
        }
    }
 
    for(i=0; i < 3; i++){
        if(glass[i] == 1){
            if(i == 0){
                printf("L");
            }else if(i == 1){
                printf("C");
            }else if(i == 2){
                printf("R");
            }
        }
    }
 
    return 0;
}