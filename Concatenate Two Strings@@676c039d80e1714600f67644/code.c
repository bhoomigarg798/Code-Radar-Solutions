#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[10];
    fgets(str1,100,stdin);
    fgets(str2,10,stdin);
    printf("%s",strcat(str1,str2));
    return 0;


}