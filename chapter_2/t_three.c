//
// Created by xuliang on 2022/5/2.
//

#include "stdio.h"

int change_age_days(int);

int change_age_days(int age) {
    return age*365;
}

int main(void) {
    int age;
    printf("input your age: \n");
    scanf("%d", &age);
    int days = change_age_days(age);
    printf("days: %d\n", days);
    return 0;
}