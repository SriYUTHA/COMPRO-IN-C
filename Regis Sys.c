#include "stdio.h"
int main() {

    int age, tall, weight;

    int range1 =0, range2=0, range3=0, range4=0, avg_age=0;
    float avg_tall=0, avg_weight=0;

    for(int i=0; i < 50; i++) {

    scanf("%d %d %d", &age, &tall, &weight);

    if(age >= 20 && tall >= 160) {
        range1++;
    }

    if(age < 20 && (tall <= 180 || weight >= 60)) {
        range2++;
    }

    if(age >= 30 && (weight >= 40 && weight <= 80)) {
        range3++;
    }

    if(age < 40 && (weight < 85 || tall <= 200)) {
        range4++;
    }

    avg_age += age;
    avg_weight += weight;
    avg_tall += tall;
  }

  printf("Age >= 20 and Height >= 160: %d\n", range1);
  printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", range2);
  printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", range3);
  printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", range4);
  printf("Average Age: %d\n", avg_age/50);
  printf("Average Height: %.2f\n", avg_tall/50);
  printf("Average Weight: %.2f", avg_weight/50);
    return 0;
}
