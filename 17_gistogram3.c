#include <stdio.h>

int main() {
    int c, i;
    int digit[10], upper[26], lower[26];
    for (i = 0; i < 10; i++)
        digit[i] = 0;
    for (i = 0; i < 26; i++) {
        upper[i] = 0;
        lower[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            digit[c - '0']++;
        else if (c >= 'A' && c <= 'Z')
            upper[c - 'A']++;
        else if (c >= 'a' && c <= 'z')
            lower[c - 'a']++;
    }

    for (i = 0; i < 10; i++) {
        if (digit[i] > 0) {
            putchar(i + '0');
            printf(": ");
            while (digit[i] > 0) {
                putchar('#');
                digit[i]--;
            }
            putchar('\n');
        }
    }

    for (i = 0; i < 26; i++) {
        if (upper[i] > 0) {
            putchar(i + 'A');
            printf(": ");
            while (upper[i] > 0) {
                putchar('#');
                upper[i]--;
            }
            putchar('\n');
        }
    }

    for (i = 0; i < 26; i++) {
        if (lower[i] > 0) {
            putchar(i + 'a');
            printf(": ");
            while (lower[i] > 0) {
                putchar('#');
                lower[i]--;
            }
            putchar('\n');
        }
    }
}
