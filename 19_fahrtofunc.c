#include <stdio.h>

// fahr to celsius with function use

float get_celsius(float fahr);

int main() {
    float fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("  %s\n\n", "Table of temperature");
    printf("%s\t%s\n", "Fahringate", "Celsius");
    while(fahr <= upper) {
        printf("%6.0f\t%14.1f\n", fahr, get_celsius(fahr));
        fahr = fahr + step;
    }
}

float get_celsius(float fahr) {
    return 5.0/9.0 * (fahr - 32.0);
}
