#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("  %s\n\n", "Table of temperature");
    printf("%s\t\t%s\n", "Celsius", "Fahringate");
    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%6.0f\t%14.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
