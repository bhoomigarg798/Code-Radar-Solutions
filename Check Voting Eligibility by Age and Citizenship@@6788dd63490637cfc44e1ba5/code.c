#include <stdio.h>
int main() {
    int age,citizen_atatus;
    scanf("%d %d",&age,&citizen_atatus);
    if (age>=18 && citizen_atatus==1) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}