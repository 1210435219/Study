#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;//short*一次加两个字节，四次加八个字节，两个int型八个字节
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
//printf(“% d, % d\n”, *pulPtr, *(pulPtr + 3));

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

    //假设，a变量的地址为0x64，则a变量在内存中的模型为：
    //    0x64 | 44 |
    //    0x65 | 33 |
    //    0x66 | 22 |
    //    0x67 | 11 |

    //    char* 类型的指针变量pc指向只能指向字符类型的空间，如果是非char类型的空间，必须要将该空间的地址强转为char * 类型。
    //    char* pc = (char*)&a; pc实际指向的是整形变量a的空间，即pc的内容为0x64，即44，
    //    * pc = 0，即将44位置中内容改为0，修改完成之后，a中内容为：0x11223300
}