//
// Created by Mz on 01/01/2023.
//

#include "stdio.h"


void practiceSwitch() {
    int number = 0;
    scanf("%d", &number);
    if (number == 0){
        printf("==0\n");
    } else if (number > 0) {
        printf(">0\n");
    } else{
        printf("<0\n");
    }
}


//void main() {
////    printf("program is going to print \n");
////    printf("1\n");
////    goto KK;
////    printf("2");
////    printf("3");
////    KK:
////    printf("你好");
//
////practiceSwitch();
//
////水仙花数
//
//int number = 123;
//
//}
