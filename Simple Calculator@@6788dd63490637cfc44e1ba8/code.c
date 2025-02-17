#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d %d",&a,&b);
    scanf("%f",&op);
    if (op == +) {
        printf("%d",a+b);
    }
    else if(op == '-') {
        printf("%d",a-b);
    }
    else if(op == '*') {
        printf("%d",a*b);
    }
    else if(op == '/'){
        if (b!=0) {
            printf("%d",a/b);
        }
        else {
            printf("error");
        }
    }
    return 0;
}