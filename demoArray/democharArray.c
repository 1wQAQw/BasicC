#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    /*如何获取数组有多少个元素： 数组的总长度 / 每一个元素长度*/
    char array[BUFFER_SIZE] = { 0 };
    
    int arraylen = sizeof(array);
    printf("len:%d\n", arraylen);

    int elementlen = sizeof(array[0]);
    printf("len:%d\n", elementlen);

    int length = arraylen / elementlen;
    printf("len:%d\n", length);
#endif

#if 0
    /* 字符数组 */
    /* Q1: 什么是字符 */
    char pNum = 'a';
    printf("pNum:%c\n", pNum);

    /* 代码规范：只要是指针的变量，变量定义第一个需要是p开头*/
    char * ptr = "hello word";
    printf("ptr:%s\n", ptr);

    char buffer[]={'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
    int buflen = sizeof(buffer);
    printf("buffer:%d ,buffer:%s\n", buffer,buffer);
#endif

    /* 字符数组初始化定义的两种方式 */
    char buffer1[] = "hellowword";
    /* 如果是以双引号（字符串）的方式 默认加上 '\0' */
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
    char buffer3[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd' };
    
    /* 如果是以单引号（字符）的方式 默认不会加上 '\0' */
    
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeod(buffer2);

    printf("buflen1:%p\n", buffer1);
    printf("buflen2:%p\n", buffer2);
    printf("buflen3:%p\n", buffer3);
    
    printf("buflen1:%d, buflen2:%d, \n", buffer1, buffer2);
    printf("buflen1:%s, buflen2:%s, buflen3:%s\n", buffer1, buffer2, buffer3);

    return 0;
}