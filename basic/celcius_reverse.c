#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP -20

double fahrToCelsius(double fahrDegrees) {
    return (5.0/9.0)*(fahrDegrees - 32);
}

int main () {
    int lowerBound = 0;
    int upperBound = 3001234;

    for(int f = UPPER; f >= LOWER; f += STEP) {
        double celcius = fahrToCelsius(f);
        printf("Fahrenheit: %3d - Celsius: %6.2f\n",f, celcius);
    }
}

