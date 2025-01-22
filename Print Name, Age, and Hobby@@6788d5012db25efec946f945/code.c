#include <stdio.h>
void main(){
    char name[10];
    int age;
    char hobby[11];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}