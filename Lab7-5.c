#include "stdio.h"
#include "math.h"

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main(){
    int var;
    double min,max,avg;

    scanf("%d", &var);
    double box[var];
    for(int i =0; i < var; i++){
        box[i] = getValue();
    }

    min = findMin(box, var);
    max = findMax(box, var);
    avg = findAvg(box, var);

    printf("%d Values\n", var);
    printf("Min: %.3lf\n", min);
    printf("Max: %.3lf\n",max);
    printf("Avg: %.3lf\n",avg);

    return 0;
}

double getValue(){
    double a;
    scanf("%lf", &a);
    return a;
}

double findMin(double array[], int size){
    double min = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int size){
    double max = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int size){
    double avg=0;
    for(int i = 0; i < size; i++){
        avg += array[i];
    }
    return avg/size;
}
