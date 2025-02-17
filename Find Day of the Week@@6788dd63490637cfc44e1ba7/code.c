#include <stdio.h>
int main() {
    int day;
    scanf("%d",&day);
    switch(day) {
        case (day==1):
            printf("Monday");
            break;
        case (day==2):
            printf("Tuesday");
            break;
        case (day==3):
            printf("Wednesday");
            break;
        case (day==4):
            printf("Thursday");
            break;
        case (day==5):
            printf("Friday");
            break;
        case (day==6):
            printf("Saturday");
            break;
        case (day==7):
            printf("Sunday");
            break;
        default:
            printf("Invalid");
        return 0;
    }
}