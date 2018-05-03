#include <stdio.h>
int main(){
    int a, b, ans;
    scanf("%i %i", &a, &b);
    if (a == b)
    {
        ans = a+b;
        printf("%i + %i = %i", a, b, ans);
    }
    else{
        ans = a-b;
        printf("%i - %i = %i", a, b, ans);
    }
}