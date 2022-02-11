#include <stdio.h>
int f(int n) 
{
    //// 1.先写递归结束条件
    //if (n <= 2) 
    //{
    //    return 1;
    //}
    //// 2.接着写等价关系式
    //return f(n - 1) + f(n - 2);

    // 1.先写递归结束条件
    if (n <= 2)
    {
        return n;
    }
    // 2.接着写等价关系式
    return f(n - 1) + f(n - 2);    
}
int main()
{
    //f斐波那契数
    //int n,r;
    //printf("请输入n值：");
    //scanf_s("%d", &n);
    //r = f(n);
    //printf("第%d个斐波那契数为：%d\n", n, r);

    //青蛙跳台阶
    int n,r;
    printf("请输入台阶数：");
    scanf_s("%d", &n);
    r = f(n);
    printf("\n共有%d种跳法\n", r);
    return 0;
}