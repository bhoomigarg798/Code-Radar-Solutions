#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",&s);
    int length = strlen(s);
    return 0;

}
int counting(char s[]) {
    int count = 0;
    for (int i=0;i!='\0';i++) {
        if (i == 'a' || i=='e' || i=='i' || i=='o' || i=='u') {
            count+=1;
        }
        else {
            continue;
        }
    }
    printf("%d",count);
}