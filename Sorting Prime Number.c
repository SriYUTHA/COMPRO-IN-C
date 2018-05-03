#include"stdio.h"
#include"string.h"
int text[10000];
int main(){
 
    int i,num,count=0,max=0;
 
    do{
     
        scanf("%d", &num);
        if (num==0)
            break;
        if(num > max){
            max = num;
        }
        count = 0;
        for(i=2;i <= num/2; i++){
            if(num % i == 0){
                count++;
            }
        }
        if(count == 0){
        text[num] = 1;
        count = 0;
        }
 
    }while(num != 0);
 
    for(i=0; i < 10000; i++){
        if(text[i] == 1){
            printf("%d\n", i);
        }
    }
 
    return 0;
}