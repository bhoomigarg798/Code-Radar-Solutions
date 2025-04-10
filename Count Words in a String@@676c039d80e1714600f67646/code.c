#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",s);
    int len = strlen(s);
    int count = 0;
    for (int i=0;i<len;i++) {
        count++;
    }
    printf("%d",count);

}