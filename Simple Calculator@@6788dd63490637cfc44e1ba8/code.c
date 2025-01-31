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
    return 0;
}