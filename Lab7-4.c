#include "stdio.h"
#include "math.h"

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {

    double temp;
    char radi;
    scanf("%lf %s", &temp, &radi);

    if(radi == 'c' || radi =='C'){
        printFarenheit(celsiusToFahrenheit(temp));
    }else if(radi == 'f' || radi =='F'){
        printCelcius(fahrenheitToCelcius(temp));
    }

    return 0;

}

double celsiusToFahrenheit(double celcius){
    return 32 + (celcius*(180.0/100.0));
}

double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32) / (180.0/100.0);
}

void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}

void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
