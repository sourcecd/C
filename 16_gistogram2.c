#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, i, state, len;
    int gist[10];
    state = OUT;
    len = 0;
    for (i = 0; i < 10; i++)
        gist[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            if (state == IN) 
                if (len < 10)
                    gist[len]++;
                else 
                    gist[0]++;
                len = 0;
            state = OUT;
        }
        else {
            len++;
            state = IN;
        }
    }
    if (len < 10)
        gist[len]++;
    else
        gist[0]++;
    printf("m ");
    while (gist[0] > 0) {
        putchar('|');
        gist[0]--;
    }
    putchar('\n');
    for (i = 1; i < 10; i++) {
        printf("%d ", i);
        while (gist[i] > 0) {
            putchar('|');
            gist[i]--;
        }
        putchar('\n');
    }
}
