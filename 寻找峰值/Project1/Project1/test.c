#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<String.h>

//ɽ��Ԫ����ָ��ֵ���ڻ������������ֵ��Ԫ�ء�����һ����������nums��
//������������Ԫ��ֵ����ȣ�������ܰ������ɽ�塣�ҵ�����������
//��ɽ��Ԫ�ز����������������� nums[-1] = nums[n] = -�ޡ�

int solve(int* a, int aLen) {
    int i = aLen - 1;
    while (i >= 0)
    {
        if (a[i] >= a[i + 1] && a[i] >= a[i - 1])
        {
            break;
        }
        else if (i == aLen - 1 && a[i] >= a[i - 1])
        {
            break;
        }
        else if (i == 0 && a[i >= a[i + 1]])
        {
            break;
        }
        i--;
    }
    return i;
}
