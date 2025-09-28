#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

// print line if it is larger than MINLINE.
int main(){
    int curlen;
    int i;
    char line[MAXLINE];
    while((curlen = my_getline(line, MAXLINE)) > 0) {
        if(curlen > MINLINE) {
            printf("%s", line);
        }
    }
    return 0;
}

int my_getline(char line[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}
