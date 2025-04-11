#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    fgets(s,100,stdin);
    int len = strlen(s);
    int count = 0;
    for (int i=0;i<len;i++) {
        count++;
    }
    printf("%d",count);

}