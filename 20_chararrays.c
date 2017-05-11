#include <stdio.h>

#define MAXLINE 1000

/* Function prototypes */
int getline(char line[], int MAXLINE);
void copy(char to[], char from[]);

/* Main function */
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;

    while ((len = getline(line, MAXLINE)) > 0) {
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

int getline(char s[], int lim) {
    int i;
    int c;

    for (i = 0; i < (lim - 1) && )
}
