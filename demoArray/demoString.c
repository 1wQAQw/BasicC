#include <stdio.h>

/* 它也是个常量 */
const int g_num = 0;


int main()
{
    /* 字符数组初始化定义的两种方式 */
    char buffer1[] = "hellowword";
    buffer1[0] = 'H';
    printf("buffer1:%s\t buffer[0]:%c\n", buffer1, buffer1[0]);

    char * ptr = "hellowore";
    printf("ptr[0]:%c\t*(ptr+1):%c\n", ptr[0],*(ptr+1));

    /* 为什么字符串不能改呢？ 因为字符串是常量。它是存放在全局区的*/
    // ptr[0] = 'H';
    // printf("ptr[0]:%c\n", ptr[0]);


    return 0;

}