#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT,
};

/* 宏定义 */
/* 代码规范：宏必须全部大写 */
#define COUNT_NUM 10
#define RANGE_NUM 200



int main()
{




#if 0
    /* 判断语句 */
    
    int budget = 5000;
    
    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweip60= 6000;

    if(budget > applephone)
    {
        /* code */
        printf(" get a applephone!\n");
    }
    else if(budget > mi14Pro)
    {
        printf(" get a mi14Pro!\n");
    }
    else if(budget > huaweip60)
    {
        printf(" get a huawei");
    }


#endif


#if 0

    int budget = 5000;
    int minbudget = 5500;
    int maxbudget = 8000;

    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweip60= 6000;

    /* 只要有一个条件被满足，那么就为1 （成立）*/
    if(budget  < applephone || budget > mi14Pro)
    {
        /* code */
        printf("i am happy, get a phone\n");
    }
    else 
    {
        printf("i am sad, no phone\n");
    }
    
    /**/
    if(minbudget < budget  && (budget < maxbudget))
    {
        printf(" success get a computer\n");
    }
    else
    {
        printf("error get a computer\n");
    }




#endif


/* 代码规范1：一个函数尽量不要超过80行 最多不要超过120行 */
#if 0
    /* switch */
    /* 坑1：每一个case都需要break；*/
    int choice = 0;
    printf("请输入你的选项：");
    scanf("%d", &choice);

    switch (choice)
    {
    case REGISTER:
        {
            /* 坑2：如果case里面的语句过多，一定需要加上{}来包含 */
            printf("welcome to register\n");
        }
        break;
    case LOGIN:
        {
            printf("welcome to login\n");
        }
        break;
    case QUIT:
        {
            printf("welcome to quit\n");
        }
        break;    
    default:
        printf("input choice invalid\n");
        break;
    } 


#endif

#if 0
    
    srand(time(NULL));

    /* 请你写一个100以内的数 */

    /* 循环 */
    /* for 循环 */

    /* 代码规范：循环不允许使用 i*/
    /* 代码规范：不允许使用魔鬼数字 */
    int randomNum = 0;
    for(int idx = 0;idx < COUNT_NUM; idx++)
    {
        /* code */
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }




#endif

#if 0

    srand(time(NULL));
    /* 编码规范：变量尽量使用驼峰式命名 */
    int cieculeTimes = COUNT_NUM >> 1;
    int randomNum = 0;

    /* 一定需要有推出的条件 */
    while (--cieculeTimes)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 1

    int varaNum = 0;
    do
    {
        /* code */
        printf("varaNum:%d\n",varaNum);
    } while (varaNum);




#endif

return 0;




}