//
// Created by xuliang on 2022/5/2.
//
#include "stdio.h"
void one_three(void);
void two(void);

int main(void) {
    one_three();
}

void one_three(void) {
    printf("starting now:\n");
    printf("one\n");
    two();
    printf("three\n");
    printf("done!\n");
}

void two(void) {
    printf("two\n");
}