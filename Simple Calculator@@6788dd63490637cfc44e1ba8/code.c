#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d" "%d",&a,&b);
    scanf(" %c",&op);
    if (op=='+'){
        printf("%d",a+b);
    }
    else if (op=='-') {
        if (a>b){
            printf("%d",a-b);
        }
        else if (b>a) {
            printf("d",b-a);
        }
    }
    else if (op=='/') {
        if (b!=0) {
            printf("%d",a/b);
        }
        else {
            printf("Invalid");
        }
    }
    return 0;
}