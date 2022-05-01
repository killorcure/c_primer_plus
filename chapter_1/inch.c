//
// Created by xuliang on 2022/5/1.

#include "inch.h"
double inch(float inch_num);
double inch(float inch_num) {
    double cm_num = inch_num * 2.5;
    return cm_num;
}
int main(void) {
    printf("enter inch for need change to cm:");
    double inch_num = 0.0;
    scanf("%lf",&inch_num);
    double res = inch(inch_num);
    printf("cm res is: %.2f\n", res);
    return 0;
}
