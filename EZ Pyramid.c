#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++)
    {
        for (int j= i+1; j < n ; j++)
        {
            printf(" ");
        }
        for (int x=0; x <= i*2; x++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
