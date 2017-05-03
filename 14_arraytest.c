#include <stdio.h>

int main() {
    int c, i;
    int nspace, nother;
    int ndigit[10];
    nspace = nother = 0;
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            nspace++;
        else if (c >= '0' && c <= '9')
            ndigit[c - '0']++;
        else
            nother++;
    }
    printf("Digits: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", ndigit[i]);
    }
    printf("\nDelimiters: %d\n", nspace);
    printf("Other: %d\n", nother);
}
