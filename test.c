#include "stdio.h"
/**
 * @author WangChong
 * @description 指针的操作
 */
void main() {
    const int MAX = 3;
    int var[] = {10, 100, 200};
    int i, *ptr; //
    ptr = var;
    printf("最初指针的值%d\n", *ptr);
    for (i = 0; i < MAX; i++) {
        printf("var[%d] 地址= %p \n", i, ptr);
        printf("存储值:var[%d] = %d\n", i, *ptr);
        /**
         if add a number of character to the pointer that the pointer already given
         the address of pointer will automatically add the corresponding bit to it's original address of -
         */
         ptr += 1;
         // each unites is 1 . Therefore, we can find the corresponding number by operating number add or ...
         // such as  POINTER += 9. The
         
        getchar();
    }
}