#include <stdio.h>

#define MAXLINE 1000
#define OVERFLOW 1
#define NORMAL 0

/* Function prototypes */
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* Main function */
int main() {
    int len;
    int max;
    int tmplen;
    int overfl;
    char line[MAXLINE];
    char longest[MAXLINE];
    char tmpline[MAXLINE];
    max = 0;
    tmplen = 0;
    overfl = NORMAL;

    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len < MAXLINE - 1 || line[MAXLINE - 2] == '\n') {
            if (overfl == NORMAL) {
                if (len > max) {
                    max = len;
                    copy(longest, line);
                }
            } else {
                tmplen += len;
                if (tmplen > max) {
                    max = tmplen;
                    copy(longest, tmpline);
                }
            }
            overfl = NORMAL;
        } else {
            if (overfl == NORMAL) {
                tmplen = 0;
                copy(tmpline, line);
            }
            tmplen += len;
            overfl = OVERFLOW;
        }
    }
    if (max > 0) {
        printf("%s\n", longest);
        printf("max line length: %d\n", max);
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

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

