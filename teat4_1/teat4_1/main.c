#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = { 1,2,5,9,1,9,1,62,8 };//�����ÿ�μӼ�1�ķ�ʽ
	printf("%d", arr[2]);
	int* p = arr + 2;
	return 0;


}