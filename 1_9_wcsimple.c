#include <stdio.h>

int main() {
    int c;
    int s, t, n;
    s = t = n = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            s++;
        if (c == '\t')
            t++;
        if (c == '\n')
            n++;
    }
    printf("spaces: %d\ntabs: %d\nnewlines: %d\n", s, t, n);
}
