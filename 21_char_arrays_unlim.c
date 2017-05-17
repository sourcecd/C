#include <stdio.h>

#define MAXLINE 8

/* Function prototypes */
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* Main function */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;

    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

int getlines(char s[], int lim) {
    int i;
    int c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < (lim - 1)) {
            s[i] = c;
        } else {
            pass
        }
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

