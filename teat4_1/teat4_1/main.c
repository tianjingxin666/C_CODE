#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = { 1,2,5,9,1,9,1,62,8 };//求和以每次加减1的方式
	printf("%d", arr[2]);
	int* p = arr + 2;
	return 0;


}