//
// Created by xuliang on 2022/5/3.
//

#include "stdio.h"

int main(void) {
    int start = 97;
    char cs[32];
    for (int num = 0; num <= 26; num++) {
        cs[num] = start + num;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c\n", cs[i]);
    }
}