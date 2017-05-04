#include <stdio.h>

int main() {
// dig - 48
// upper - 65
// lower  - 97
    int c, i;
    int digit[10], upper[26], lower[26];
    for (i = 0; i < 10; i++)
        digit[i] = 0;
    for (i = 0; i < 26; i++)
        upper[i] = 0;
    for (i = 0; i < 26; i++)
        lower[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            digit[c - '0']++;
        else if (c >= 'A' && c <= 'Z')
            upper[c - 'A']++;
        else if (c >= 'a' && c <= 'z')
            lower[c - 'a']++;
    }
// help
    for (c = 0; c < 256; c++) {
        printf("%d-%c", c, c);
        putchar(' ');
    }
        putchar('\n');
}
