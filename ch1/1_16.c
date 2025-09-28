#include <stdio.h>
#define MAXLINE 100

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

// get longest line, and then print it.
int main(){
    int curlen, maxlen;
    int i;
    char line[MAXLINE];
    char longestLine[MAXLINE];
    maxlen = 0;
    while((curlen = my_getline(line, MAXLINE)) > 0) {
        if(curlen > maxlen) {
            copy(longestLine, line);
            maxlen = curlen;
        }
    }
    if (maxlen > 0) printf("%s\nLength: %d", longestLine, maxlen);
    return 0;
}

int my_getline(char line[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-2 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    if(c == EOF || c == '\n') return i;

    for(; (c = getchar()) != EOF && c != '\n'; ++i) {
        ; // absorb additional inputs
    }
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}
