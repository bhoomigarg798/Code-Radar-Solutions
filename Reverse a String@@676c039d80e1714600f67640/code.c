#include <stdio.h>
#include <string.h>
void reversstribg(char arr[]) {
    int len = strlen(arr);
    for (int i=len -1;i>=0;i--) {
        printf("%s",arr[i])
    }
}
int main() {
    char s[];
    scanf("%s",s);
    reversstribg(s[]);
    return 0;

}