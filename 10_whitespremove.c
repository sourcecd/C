#include <stdio.h>

main() {
    int c;
    int s = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            s++; 
        else 
            s = 0;
        if (s <= 1) 
            putchar(c);
    }
    putchar('\n');
}
