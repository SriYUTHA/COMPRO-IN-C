#include <stdio.h>
int main(){
    int num;
    float max, min, avg, input, sum;
    int i = 0;
    scanf("%i\n", &num);
    for (i=0; i<num; i++)
    {
        scanf("%f", &input);
        sum += input;
        if (i == 0){
            min = input;
            max = input;
        }
        if (input <= min){
            min = input;
        }
        else if (input > max){
            max = input;
        }
    }
    avg = sum / num;
    printf("%i Values\n", num);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f\n", avg);
}