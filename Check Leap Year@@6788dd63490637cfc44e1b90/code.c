#include <stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    if (year%4==0){
        printf("Leap year");
    }
    else if (year%400!=0){
        printf("Not a Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
}