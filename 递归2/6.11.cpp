#include <stdio.h>
int f(int n) 
{
    //// 1.��д�ݹ��������
    //if (n <= 2) 
    //{
    //    return 1;
    //}
    //// 2.����д�ȼ۹�ϵʽ
    //return f(n - 1) + f(n - 2);

    // 1.��д�ݹ��������
    if (n <= 2)
    {
        return n;
    }
    // 2.����д�ȼ۹�ϵʽ
    return f(n - 1) + f(n - 2);    
}
int main()
{
    //f쳲�������
    //int n,r;
    //printf("������nֵ��");
    //scanf_s("%d", &n);
    //r = f(n);
    //printf("��%d��쳲�������Ϊ��%d\n", n, r);

    //������̨��
    int n,r;
    printf("������̨������");
    scanf_s("%d", &n);
    r = f(n);
    printf("\n����%d������\n", r);
    return 0;
}