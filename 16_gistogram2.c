#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, i, state, len, maxlen;
    int gist[10];
    state = OUT;
    len = 0;
    for (i = 0; i < 10; i++)
        gist[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            if (state == IN) {
                if (len < 10)
                    gist[len]++;
                else 
                    gist[0]++;
            }
            len = 0;
            state = OUT;
        }
        else {
            len++;
            state = IN;
        }
    }
    if (len > 0 && len < 10)
        gist[len]++;
    else if (len >= 10)
        gist[0]++;

//generate histogram
    maxlen = gist[0];
    for (i = 1; i < 10; i++)
        if (gist[i] > maxlen)
            maxlen = gist[i];
    while (maxlen != 0) {
        for (i = 0; i < 10; i++) {
            if (gist[i] < maxlen)
                printf("   ");
            else
                printf(" # ");
        }
        putchar('\n');
        maxlen--;
    }
    printf(" m ");
    for (i = 1; i < 10; i++)
        printf(" %d ", i);
    putchar('\n');
}
