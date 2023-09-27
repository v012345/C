#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main()
{
#ifdef _WIN32 // _WIN32 在 32 和 64 位上都有定义, _WIN64 只在 64 位上有定义
    system("chcp 65001");
#endif
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
    printf("int 存储大小 : %zd \n", sizeof(int));
    printf("float 存储最大字节数 : %zu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    int i = 1;
    i++;
    return 0;
}
