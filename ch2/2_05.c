#include <stdio.h>
#define MAXLINE 1000

int my_getline(char s[], int lim);
int any(char[], char[]);

// write getline for loop without || or %%
int main() {
    char line[MAXLINE];
    char exclude[] = "aiueo";
    int len;
    while((len = my_getline(line, MAXLINE)) > 0) {
        printf("Index: %d\n", any(line, exclude));
    }
    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;
    for(i = 0; s1[i] != '\0'; ++i) {
        for(j = 0; s2[j] != '\0'; ++j) {
            if(s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
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

