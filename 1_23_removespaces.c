#include <stdio.h>

#define MAXLINE 1000

/* Function prototypes */
int getlines(char line[], int maxline);
int checkline(char newline[], int pos, char symb);

/* Main function */
int main() {
    char line[MAXLINE];

    while (getlines(line, MAXLINE) > 0) {
        if (line[0] != '\n') {
            if (line[0] != ' ') {
                printf("%s", line);
            } else if (line[1] != '\n') {
                printf("%s", line);
            }
        }
    }
    return 0;
}

int getlines(char s[], int lim) {
    int i;
    int c;

    for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && c != '\n'; i++) {
        i = checkline(s, i, c);
    }        
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int checkline(char ml[], int p, char sy) {
    if (p == 0) {
        ml[p] = sy;
    } else if ((sy == ' ' || sy == '\t') && (ml[p - 1] == ' ' || ml[p - 1] == '\t')) {
        ml[p - 1] = ' ';
        p = p - 1;
    } else {
        ml[p] = sy;
    }
    return p;
}