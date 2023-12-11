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

#if 0
//case2：有参数，没有返回值
/* 函数参数一定有数据类型 */
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}
#endif

#if 0
// case3: 有参数 有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}


#endif

typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
} STATUS_CODE;
/* 取别名 */
#if 0
typedef enum STATUS_CODE STATUS_CODE; //这种可以
#endif

int main()
{
#if 0
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
    
    STATUS_CODE status;
    int len = sizeof(status);
    ptintr("%d",len);

}
#endif
    
    STATUS_CODE status;
    int len = sizeof(status);
    ptintr("%d",len);

    int num1 = 50;
    int num2 = 60;

    int sum = calculateADD(num1, num2);
    printf("sum:%d\n",sum);

    int Sub = calculateSub(num1, num2);
    printf("Sub:%d\n",Sub);

    int Mul = calculateMul(num1, num2);
    printf("Mul:%d\n",Mul);

    int Div = calculateDiv(num1, num2);
    printf("Div:%d\n",Div);

    return 0;
}