#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void QuickSort(int* arr, int low, int high)
//{
//    if (low < high)
//    {
//        int i = low;
//        int j = high;
//        int k = arr[low];
//        while (i < j)
//        {
//            while (i < j && arr[j] >= k)     // 从右向左找第一个小于k的数
//            {
//                j--;
//            }
//
//            if (i < j)
//            {
//                arr[i++] = arr[j];
//            }
//
//            while (i < j && arr[i] < k)      // 从左向右找第一个大于等于k的数
//            {
//                i++;
//            }
//
//            if (i < j)
//            {
//                arr[j--] = arr[i];
//            }
//        }
//
//        arr[i] = k;
//
//        // 递归调用
//        QuickSort(arr, low, i - 1);     // 排序k左边
//        QuickSort(arr, i + 1, high);    // 排序k右边
//    }
//}


void Quicksort(int ch[], int left, int right)
{
    int L = left;
    int R = right;
    int mid = left;
    int m = ch[left];
    if (left >= right)
        ;
    else
    {
    while (L < R)
    {
        while ((L < R) && (ch[R] > m))
        {
            R--;
        }
        if (left < R)
        {
            ch[L] = ch[R];
        }
        while ((L < R) && (ch[L] < m))
        {
            L++;
        }
        if (L < R)
        {
            ch[R] = ch[L];
        }
    }
    ch[L] = m;
    Quicksort(ch, left, L - 1);
    Quicksort(ch, L + 1, right);
    } 
}


int main()
{
    int arr[1000];
    int i = 0;
    for (i = 1000; i > 0; i--)
    {
        arr[-(i - 1000)] = i;
    }
    int sz = sizeof(arr) / sizeof(arr[0]);
    //char ch[201];
    //while (~scanf("%s", &ch))
    //{
    //    int len = strlen(ch) - 1;
    //    Quicksort(ch, 0, len);
        Quicksort(arr, 0, sz-1);
   //     QuickSort(arr,0,sz-1);
   //     printf("%s", arr);
   // }
        for (i = 0; i <= 999; i++)
        {
            printf("%d\n", arr[i]);
        }
    return 0;
}