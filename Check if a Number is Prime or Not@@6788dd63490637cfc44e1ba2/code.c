#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i*I<=a;i++){
        if (a%i!=0){
            printf("Prime");
        }
    }
    return 0;
}