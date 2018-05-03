#include <stdio.h>
int main() {
    int num, sum=0;
    for (int i = 1;;)
    {
        scanf("%d", &num);
        if(num == -9) {
            break;
        }else{
            sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}
