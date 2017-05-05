#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, i, state, len, maxlen;
    int gist[256];
    state = OUT;
    len = 0;
    for (i = 0; i < 256; i++)
        gist[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') {
            if (state == IN) {
                if (len < 256)
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
    if (len > 0 && len < 256)
        gist[len]++;
    else if (len >= 256)
        gist[0]++;

//generate histogram
    maxlen = gist[0];
    for (i = 1; i < 256; i++)
        if (gist[i] > maxlen)
            maxlen = gist[i];
    while (maxlen != 0) {
        for (i = 0; i < 256; i++) {
            if (gist[i] != 0) { 
                if (gist[i] < maxlen)
                    printf("    ");
                else
                    printf("   #");
            }
        }
        putchar('\n');
        maxlen--;
    }
    if (gist[0] != 0) 
        printf("   m");

    for (i = 1; i < 256; i++)
        if (gist[i] != 0) 
            printf("%4d", i);
    putchar('\n');
}
