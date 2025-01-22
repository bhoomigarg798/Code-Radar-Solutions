#include <stdio.h>
void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>0 && b<0){
        printf("True");
    }
    else if (a==0 && b==0){
        printf("True");
    }
    return 0;
}