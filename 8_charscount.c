#include <stdio.h>

main() {
    int count;
    for (count = 0; getchar() != EOF; count++)
    ;
    printf("%6d\n", count);
}
