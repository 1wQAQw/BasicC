#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 11
// *p就是解引用的 （读写数据）  read： *p = 5；

/* 指针 */
int main()
{
#if 0
  // 1.指针的定义
  // 基础数据类型
    /* 建议（Tips）：定义变量记得初始化*/
    int a = 9;
    long b = 0;

    /* 指针的定义 */
    int *P = NULL;

#endif

#if 0
    /* 指针的使用:指针内存存放的是变量地址 */
    int a = 5;
    int *P = &a;

    printf("a:%d\n", a);
    printf("&a:%p\n", &a);
    /* 非常重要 */
    printf("*(&a) = %d\n", *(&a));

    printf("*p = %d\n", *P);
    printf("p = %p\n", P);
    printf("&p:%p\n", &P);

#endif


#if 0
    /* 这个不对 */
    int *ptr = &P;
    printf("p:%p\n", ptr);
#endif

#if 0
    int **ptr = &P;
    printf("p1:%p\n", ptr);
    // printf("*ptr:%p\n", *ptr);

    // /* 非常非常 非常重要 */
    // printf("*(*ptr): %d\n", *(*ptr));

    int ***pptr = &ptr;
    printf("p: %p\n", pptr);
    printf("p: %p\n", *pptr);
#endif

#if 0

    /* 指针的特性 */
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    int p = 10;
    len = sizeof(a);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
#endif

#if 0
    /* 指针特性2：指针和字符串 */
    /* 字符串是区别去字符数组的 */
    char * ptr = "hello world";
    int len = sizeof(ptr);
    printf("len: %d\n", len);

    /* 怎么获取字符串的长度 */
    int length = strlen(ptr);
    printf("%d\n", strlen(*ptr));

    /* Q2: 字符数组的复制 */
    char name[BUFFER_SIZE] = { 0 };
    srtcpy(name, "shangsan");
    printf("name:%s\n",name);

    /* Q3: 我要给字符串赋值 */
    char *ptr2 = NULL;
    ptr2 = "zhangsan"; //错误
    printf("ptr:%s\n", ptr2);
#endif
    /* 堆空间 */
    /* void *是一个指针，这个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr); 




    return 0;
}