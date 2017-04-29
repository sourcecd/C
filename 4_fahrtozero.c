#include <stdio.h>

main() {
    int fahr;
    printf("  %s\n\n", "Table of temperature");
    printf("%s\t%s\n", "Fahringate", "Celsius");
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%6d\t%14.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}
