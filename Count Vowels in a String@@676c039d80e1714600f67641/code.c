#include <stdio.h>
void counting(char s[]);
int main() {
    char s[100];
    scanf("%s",s);
    counting(s);
    return 0;

}
void counting(char s[]) {
    int count = 0;
    for (int i=0;s[i]!='\0';i++) {
        char ch = s[i];
        if ((ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch =='u') ||(ch =='A' || ch=='E' || ch=='I' || ch =='O' || ch=='U')) {
            count++;
        }
    }
    printf("%d",count);
}