#include <stdio.h>

int main() {
    printf("Enter your total marks = ");
    int mark;
    scanf("%d", &mark);
    
    if (mark == 100) {
        printf("you have very good marks\n");
    }
    // Using && to check if mark is between 75 and 99 (inclusive)
    else if (mark <= 99 && mark > 75) {
        printf("you can do more great\n");
    }
    else if (mark <= 75 && mark > 50) {
        printf("you have scored second divison\n");
    }
    else if (mark <= 50 && mark >= 35) {
        printf("you need to improve\n");
    }
    else if (mark < 35) {
        printf("you are fail\n");
    }
    
    return 0;
}