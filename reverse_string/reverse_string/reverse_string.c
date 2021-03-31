#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int str_len(char* p)
//{
//	if (*p != '\0')
//	{
//		return str_len(p + 1) + 1;
//	}
//	else
//		return 0;
//}
//
//char reverse_string(char* ap,int ch)
//{
//	int len = str_len(ap);
//	int temp;
//	if (len > (ch/2))
//	{
//		temp = *ap;
//		*ap = *(ap+(2*len-ch));//ch-len
//		*(ap + (2 * len - ch)) = temp;
//		return reverse_string(ap + 1, ch);
//	}
//	else
//		;
//}



int str_len(char* arr)
{
	if (*arr != '\0')
	{
		return 1+str_len(arr + 1);
	}
	else
	{
		return 0;
	}
}


int reverse_string(char*a, int arrlen,int nowlen)
{
	if (nowlen < (arrlen / 2))
	{
		char temp = *(a+nowlen);
		*(a+nowlen) = *(a+(arrlen-nowlen)-1);
		*(a + (arrlen - nowlen)-1) = temp;
		return reverse_string(a, arrlen, nowlen+1);
	}
}

int main()
{
	char arr[20] = "0";
	scanf("%s", &arr);
	int arrlen=str_len(arr); 
	reverse_string(arr, arrlen,0);
	printf("%s", arr);
	return 0;
}