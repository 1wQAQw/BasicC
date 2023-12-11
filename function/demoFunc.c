#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

/* 函数参数：可以没有 也可以有*/
/* 函数返回值：可以没有 也可以有
    没有的情况需要写void
    如果有，返回你想返回的数据类型 { int | long | char | double | short | float}
*/

/* 什么叫API： Appliction Programing Intert */

/* 函数的定义 */

#if 1

//case1：没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}

#endif

#if 1
//case2：有参数，没有返回值
/* 函数参数一定有数据类型 */
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}
#endif

#if 1
// case3: 有参数 有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}


#endif

int main()
{
    /* 函数的调用 */
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;

    /* 函数的使用 */
    myAddNum(num1, num2);
    

    int totalSum = myAddNum2(num1, num2);

    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        print("get a transFormer\n");
    }
    else
    {
        print("i not get\n");
    }

    return 0 ;
}