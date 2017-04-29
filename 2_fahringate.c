#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("  %s\n\n", "Table of temperature");
    printf("%s\t%s\n", "Fahringate", "Celsius");
    while(fahr <= upper) {
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%6.0f\t%14.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
