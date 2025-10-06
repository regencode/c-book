#include <stdio.h>
#define MAXLINE 1000

int my_getline(char s[], int lim);
int htoi(char[]);

// write getline for loop without || or %%
int main() {
    char line[MAXLINE];
    int len;
    while((len = my_getline(line, MAXLINE)) > 0) {
        printf("%d\n", htoi(line));
    }
    return 0;
}

int htoi(char s[]) {
    int val, i;
    if(s[0] == '0' && (s[i] == 'x' || s[i] == 'X')) i = 2;
    else i = 0;
    val = 0;
    for(; s[i]!='\0'; ++i){
        if(s[i] >= '0' && s[i] <= '9') {
            val = 16 * val + (s[i] - '0');
        } 
        else if(s[i] >= 'A' && s[i] <= 'F') {
            val = 16 * val + (s[i] - 'A' + 10);
        }
    }
    return val;
}

int my_getline(char s[], int lim) {
    int i, c;
    for(i = 0; i<lim-1; ++i) {
        if((c = getchar()) == EOF) break;
        if(c == '\n') break;
        s[i] = c;
    }
    if(c == '\n') {
        s[i++] = '\n';
    }
    s[i] = '\0';
    return i;
}

