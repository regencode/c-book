#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

// print line if it is larger than MINLINE.
int main(){
    int curlen;
    int i;
    char line[MAXLINE];
    while((curlen = my_getline(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
    return 0;
}

int my_getline(char line[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if(c == '\n') {
        line[i] = '\n';
        line[i+1] = '\0';
    }
    else line[i] = '\0';

    for(--i; i >= 0 && (line[i] == '\t' || line[i] == ' '); --i) {
        if(c == '\n') {
            line[i] = '\n';
            line[i+1] = '\0';
        }
        else line[i] = '\0';
    }
    if (line[0] == '\n') {
        line[0] = '\0'; 
        return 1;
    }
    else if(line[0] == '\0') {
        return 0;
    }
    else {
        return i+1;
    }
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}
