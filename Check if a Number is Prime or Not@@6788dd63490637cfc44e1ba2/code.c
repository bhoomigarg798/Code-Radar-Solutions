#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++){
        if (a%i!=0){
            printf("Prime\n");
            return 0;
        }
        else {
            printf("Not Prime");
        }
    }
    return 0;
}