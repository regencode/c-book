#include <stdio.h>
#define MAXLINE 1000

int my_getline(char s[], int lim);

// write getline for loop without || or %%
int main() {
    char line[MAXLINE];
    int len;
    while((len = my_getline(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
    return 0;
}

int my_getline(char s[], int lim) {
    int i, c;
    for(i = 0; i<lim-1; ++i) {
        if((c = getchar()) == EOF) break;
        if(c == '\n') break;
        s[i] = c;
    }
    if(c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}

