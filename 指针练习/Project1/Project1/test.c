#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;//short*һ�μ������ֽڣ��ĴμӰ˸��ֽڣ�����int�Ͱ˸��ֽ�
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf(��% d, % d\n��, *pulPtr, *(pulPtr + 3));

struct stu
{
    int num;
    char name[10];
    int age;
};


//void fun(struct stu* p)
//{
//    printf(" % s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}

#include <stdio.h>
int main()
{
    int a = 0x11223344;
    char* pc = (char*)&a;
    *pc = 0;
    printf("%x\n", a);
    return 0;

    //���裬a�����ĵ�ַΪ0x64����a�������ڴ��е�ģ��Ϊ��
    //    0x64 | 44 |
    //    0x65 | 33 |
    //    0x66 | 22 |
    //    0x67 | 11 |

    //    char* ���͵�ָ�����pcָ��ֻ��ָ���ַ����͵Ŀռ䣬����Ƿ�char���͵Ŀռ䣬����Ҫ���ÿռ�ĵ�ַǿתΪchar * ���͡�
    //    char* pc = (char*)&a; pcʵ��ָ��������α���a�Ŀռ䣬��pc������Ϊ0x64����44��
    //    * pc = 0������44λ�������ݸ�Ϊ0���޸����֮��a������Ϊ��0x11223300
}