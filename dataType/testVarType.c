#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 数据类型 */
/* sizeof 是计算字节的大小 */
int main()
{   
#if 0
    long bigValue = 0;
    int len = sizeof(bigValue);
    printf("len: %d, a = %ld\n", len, bigValue); 
    /* 变量的命名：数字，字母下划线，只能以字母下划线开头 */
    /* 数据类型对应的是内存的存储空间 */
    int age = 6;
    len = sizeof(age);  /* 整形就是整数 */
    printf("len: %d, a = %d\n", len, age);  /* %d就是打印整数 */
    printf("hello word\n");

    short smallValue = 1;
    len = sizeof(smallValue);
    printf("len: %d, a = %d\n", len, smallValue);
#if 1
    /* 浮点数 */
    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight);
#else
    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight); /* %f就是打印小数/浮点型 */
#endif

    char sex = 'm';
    len = sizeof (sex);
    printf("len: %d,sex = %c\n", len, sex); /* %c就是打印字符 */
#endif

#if 0
    /**/
    /* 有符号 */
    char sex = -1;
    int len = sizeof (sex);
    printf("len: %d,sex = %c sex = %d\n", len, sex, sex); /* %c就是打印字符 */
    

    char default_value = 137;
    len = sizeof (default_value);
    printf("len: %d,sex = %c sex = %d\n", len, default_value, default_value); /* %c就是打印字符 */

    /* */
    /* 无符号 和 有符号区别 */
    unsigned char m_value = -1;
    len = sizeof (m_value);
    printf("len: %d,sex = %c sex = %d\n", len, m_value, m_value); /* %c就是打印字符 */
#endif

#if 0
    /* 表达式 & 运算符 */
    /* 运算符 + - * / */
    int val = 3 - 5 * 2;
    printf("val:%d\n",val);

    /* 括号的优先级最高 运算符的优先级用括号的限制 */
    /* 后置++ */
    val++; // val = val + 1；
    printf("val:%d\n",val);
    val--;
    printf("val:%d\n",val);

    /* 后置++ */
    val++; // val = val + 1；
    printf("val:%d\n",val);
    val--;
    printf("val:%d\n",val);

#endif

#if 0
    val = val + 100;    
    printf("val:%d\n",val);


    val += 100;    
    printf("val:%d\n",val);
#endif


#if 0
    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value / 3;        /*取模*/

    printf("discuss:%d\n", discuss);
    printf("remainder:%d\n", remainder);

    /* 随机数 */
    int randomVal = rand();
    printf("ranomVal:%d\n",randomVal);

    /* 中奖率为25% */
    int lotteryRate = randomVal % 4;  // [0,3]
    printf("lottreyRate:%d\n",lotteryRate);
#endif

#if 0

    int a = 51;
    // 32 + 16 + 2 + 1
    // 2^5 + 2^4 + 2^1 + 2^0
    printf("a:%d\n",a);
    a <<= 1;
    printf("a:%d\n", a);
#endif

#if 0
    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;

    printf("orVal:%d\n", orVal);
    printf("andVal:%d\n", andVal);

    /* 非 */
    int notVal = !val;
    printf("notVal:%d\n", notVal);
#endif

#if 0
    /* 且 或 非 */
    int condition1 = 1;
    int condition2 = 5;
    /* 或：*/
    if((condition1 == 1)  || (condition2 == 5))
    {
    printf("hello world\n");
    }
    else
    {
    printf("not hello world\n");
    }
    /*且：两边*/
#endif


    /* 运算符：双目运算符 & 三目运算符 */
    /* 双目运算符 */
    // int a = 7 + 8;


    /* */
    int num1 = 10;
    int num2 = 30;

    /* */
    int num3 = num1 > num2 ? 100 : 666;
    printf("num3:%d\n",num3); 





    return 0;
}
