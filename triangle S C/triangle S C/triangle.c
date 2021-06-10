#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	float a , b , c ;
	scanf("%f %f %f", &a, &b, &c);
	float n = (a + b + c) / 2;
	printf("circumference= %.2f area= %.2f \n",a+b+c, sqrt(n * (n - a) * (n - b) * (n - c)));
	return 0;
}