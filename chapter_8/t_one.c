//
// Created by xuliang on 2022/5/3.
//

#include "stdio.h"
#define SPACE_C ' '
#define SPACE_T '\t'

int main(void) {
    int space_num = 0, next_line_c_num = 0, others_num = 0;
    char ch;
    while (( ch = getchar() ) != EOF) {
        if (ch == SPACE_C) {
            space_num++;
        } else if (ch == SPACE_T) {
            next_line_c_num++;
        } else {
            others_num++;
        }
    }
    printf("space: %d next_line_num: %d other_num: %d", space_num, next_line_c_num, others_num);
}