#include <stdio.h>
#define MAXLINE 1000

int my_getline(char s[], int lim);
void squeeze(char[], char[]);

int main() {
    char line[MAXLINE];
    char exclude[] = "aiueo"; // exclude vowels
    int len;
    while((len = my_getline(line, MAXLINE)) > 0) {
        squeeze(line, exclude);
        printf("%s", line);
    }
    return 0;
}

// j stays back if s1[i] is inside s2[].
// otherwise, j follows i (j is post-incremented)
// j <= i always.
void squeeze(char s1[], char s2[]) {
    int i, j, k;
    char c;
    for(i = j = 0; s1[i] != '\0'; ++i) {
        for(k = 0; s2[k] != '\0'; ++k) {
            if(s1[i] == s2[k]) break;
        }
        if(s2[k] == '\0') { // no match
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
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

