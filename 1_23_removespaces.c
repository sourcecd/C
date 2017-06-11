#include <stdio.h>

#define MAXLINE 1000

/* Function prototypes */
int getlines(char line[], int maxline);

/* Main function */
int main() {
    char line[MAXLINE];

    while (getlines(line, MAXLINE) > 0) {
        if (line[0] != '\n') {
            printf("%s", line);
        }
    }
    return 0;
}

int getlines(char s[], int lim) {
    int i;
    int c;

    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && c != '\n'; i++) {
        s[i] = c;
    }        
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

