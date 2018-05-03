#include"stdio.h"
 
int main(){
 
    int num,i=1,j=1,z=0,count=0,round=0;
    int box[10000];
    int ans=0;
    // check eightdivisor
 
    scanf("%d", &num);
 
    for(i=1; i <= num; ++i)
    {
        for(j=1; j <= i; ++j) {
         
            if( i % j == 0) {
                count++;
            }
        }
        // printf("%d\n", count);
        if(count == 8) {
            // printf("%d\n", i   );
            box[round] = i;
 
            round++;
             
        }
        count = 0;
    }
     
    for(z =0; z < round; z++)
    {
        ans += box[z];
    }
 
    printf("%d\n",ans );
}