#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long long ai[100000] = { 0 };
long long bi[100000] = { 0 };
long long n = 0;
long long avg = 0;
long long r = 0;
long long i;
long long j;

long long result(long long ai, long long bi, long long now, long long* learn_time)
{
    if (r - ai < n * avg - now)
    {
        *learn_time += bi * (r - ai);
        return r - ai;
    }
    else
    {
        *learn_time += (n * avg - now) * bi;
        return (n * avg) - now;
    }

}

int sort(int low, int hight)
{
    int index = low;
    if (hight <= low)
        return 0;
    else
    {
        while (low != hight)
        {
            long long temp;
            if ((index == low) && (bi[low] <= bi[hight]))
                hight--;
            else if ((index == hight) && (bi[low] <= bi[hight]))
                low++;
            else if ((index == low) && (bi[low] > bi[hight]))
            {
                temp = bi[low];
                bi[low] = bi[hight];
                bi[hight] = temp;
                temp = ai[low];
                ai[low] = ai[hight];
                ai[hight] = temp;
                low++;
                index = hight;
            }
            else if ((index == hight) && (bi[low] > bi[hight]))
            {
                temp = bi[low];
                bi[low] = bi[hight];
                bi[hight] = temp;
                temp = ai[low];
                ai[low] = ai[hight];
                ai[hight] = temp;
                hight--;
                index = low;
            }
        }
        return sort(0, index - 1);
        return sort(index + 1, n - 1);
    }
}

int main()
{
    long long now = 0;
    long long learn_time = 0;

    while (scanf("%lld %lld %lld", &n, &r, &avg) != EOF)
    {
        for (i = 0; i <= n; i++)
        {
            scanf("%lld %lld", &ai[i], &bi[i]);
        }
        for (i = 0; i < n; i++)
        {
            now += ai[i];
        }
        sort(0, n - 1);

        for (i = 0; i <= n; i++)
        {
            now += result(ai[i], bi[i], now, &learn_time);
            if (now >= n * avg)
            {
                printf("%lld\n", learn_time);
                break;
            }
        }

    }
    return 0;
}
//#include<stdio.h>
//
//
//int i;
//int j;
//
//int result(int r, long ai, long bi, int now, int n, int avg, int* learn_time)
//{
//    if (r - ai <= n * avg - now)
//    {
//        *learn_time += bi * (r - ai);
//        return r - ai;
//    }
//    else
//    {
//        *learn_time += (n * avg - now) * bi;
//        return n * avg - now;
//    }
//
//}
//
//void sort(int n, long* ai, long* bi)
//{
//    long temp1;
//    long temp2;
//    for (j = n; j >= 0; j--)
//    {
//        for (i = 0; i < j - 1; i++)
//        {
//            if (bi[i] > bi[i + 1])
//            {
//                temp2 = *(ai+i);
//                temp1 = *(bi+i);
//                *(ai + i) = *(ai+i+1);
//                *(bi + i) = *(bi+i+1);
//                *(ai + i + 1) = temp2;
//                *(bi + i + 1) = temp1;
//            }
//        }
//    }
//}
//
//
//int main()
//{
//    int now = 0;
//    int n = 0;
//    int avg = 0;
//    long learn_time = 0;
//    int r = 0;
//    scanf("%d %d %d", &n, &r, &avg);
//   
//    long ai[100000] = { 0 };
//    long bi[100000] = { 0 };
//   
//   
//    for (i = 0; i <= n; i++)
//    {
//        scanf("%d %d", &ai[i], &bi[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        now += ai[i];
//    }
//
//    sort(n, ai, bi);
//    
//    for (i = 0; i <= n; i++)
//    {
//        now += result(r, ai[i], bi[i], now, n, avg, &learn_time);
//        if (now >= n * avg)
//            break;
//    }
//    printf("%d", (int)learn_time);
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//long long a[100005];
//long long b[100005];
//void kuaisu(int head, int tail)
//{
//    if (head >= tail)
//        ;
//    else
//    {
//        int a1 = head;
//        int a2 = tail;
//        int a3;
//        int swap;
//        while (a1 != a2)
//        {
//            if (a1<a2 && b[a1]>b[a2])
//            {
//                swap = a[a1];
//                a[a1] = a[a2];
//                a[a2] = swap;
//                swap = b[a1];
//                b[a1] = b[a2];
//                b[a2] = swap;
//                a3 = a1;
//                a1 = a2;
//                a2 = a3;
//                a2++;
//            }
//            else if (a1 > a2 && b[a1] < b[a2])
//            {
//                swap = a[a1];
//                a[a1] = a[a2];
//                a[a2] = swap;
//                swap = b[a1];
//                b[a1] = b[a2];
//                b[a2] = swap;
//                a3 = a1;
//                a1 = a2;
//                a2 = a3;
//                a2--;
//            }
//            else
//            {
//                if (a1 > a2)
//                    a2++;
//                else
//                    a2--;
//            }
//        }
//        kuaisu(head, a1 - 1);
//        kuaisu(a1 + 1, tail);
//    }
//}
//int main()
//{
//    long long n, r, avg;
//    long long i, j;
//    long long total = 0;
//    long long nowgrades;
//    while (scanf("%lld %lld %lld", &n, &r, &avg) != EOF)
//    {
//        for (i = 1; i <= n; i++)
//        {
//            scanf("%lld %lld", &a[i], &b[i]);
//        }
//        total = n * avg;
//        nowgrades = 0;
//        for (i = 1; i <= n; i++)
//        {
//            nowgrades = nowgrades + a[i];
//        }
//        long long needgreades = total - nowgrades;
//        long long time = 0;
//        kuaisu(1, n);
//        for (i = 1; i <= n; i++)
//        {
//            a[i] = r - a[i];
//        }
//        total = 0;
//        int jishuqi = 0;
//        a[0] = 0;
//        b[0] = 0;
//        while (total < needgreades)
//        {
//            time = time + a[jishuqi] * b[jishuqi];
//            jishuqi++;
//            total = total + a[jishuqi];
//        }
//        total = total - a[jishuqi];
//        time = time + (needgreades - total) * b[jishuqi];
//        printf("%lld\n", time);
//
//    }
//
//    return 0;
//}