#include<stdio.h>
int main(){
    int n;
    scanf("%i", &n);
    while (n % 2 != 0 || n < 2)
    {
        printf("error\n");
        scanf("%i", &n);
    }
    for (int i = 1; i <= n/2; i++){
        printf("%i", i);
    }
    for (int j = (n/2)-1; j>=0;j--){
        printf("%i", j+1);
    }
    return 0;
}
