#include "apue.h"
#include <stdio.h>

int main() {
    /* 测试一些apue.h中定义的函数 */
    printf("Testing IntelliSense...\n");
    
    /* 这些函数应该在apue.h中有声明 */
    err_quit("test error");
    err_sys("test sys error");
    
    return 0;
}
