#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state, nc, nw, nl;
    nl = nw = nc = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n')
            nl++;
        if (c == '\t' || c == ' ' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            nw++;
        }
    }
    printf("lines: %d, words: %d, chars: %d\n", nl, nw, nc);
}
