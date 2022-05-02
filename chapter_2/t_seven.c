//
// Created by xuliang on 2022/5/2.
//

#include "stdio.h"

int main(void) {
    int num = 3;
    for(int i = 0; i < num; i++) {
//        printf("num: %d", i);
        for (int j = num-i; j > 0; j--) {
            printf("Smile!");
        }
        printf("\n");

    }
}