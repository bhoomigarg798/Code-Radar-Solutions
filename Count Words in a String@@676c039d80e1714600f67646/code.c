#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    fgets(s,100,stdin);
    int len = strlen(s);
    int count = 1;
    for (int i=0;s[i]!='\0';i++) {
        if (s[i] = ' ') {
            count++;
        }
    }
    printf("%d",count);

}