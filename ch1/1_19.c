#include <stdio.h>
#define MAXLINE 1000

int my_getline(char line[], int maxline);
void my_reverse(char line[], int maxline);

// print line if it is larger than MINLINE.
int main(){
    int curlen;
    int i;
    char line[MAXLINE];
    while((curlen = my_getline(line, MAXLINE)) > 0) {
        my_reverse(line, MAXLINE);
        printf("%s", line);
    }
    return 0;
}

void my_reverse(char line[], int maxline) {
    int i, len;
    char temp;
    i = 0;
    while(++i) {
        if(line[i] == '\0'|| i >= maxline-1) break;
    }
    len = i - 1;
    if(line[len] == '\n') --len;
    for(i = 0; i < len; ++i, --len){
        temp = line[i];
        line[i] = line[len];
        line[len] = temp;
    }
}


int my_getline(char line[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if(c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}
