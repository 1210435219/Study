#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<String.h>

//山峰元素是指其值大于或等于左右相邻值的元素。给定一个输入数组nums，
//任意两个相邻元素值不相等，数组可能包含多个山峰。找到索引最大的那
//个山峰元素并返回其索引。假设 nums[-1] = nums[n] = -∞。

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
