//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void move(char* pa,int a)
//{
//	int len = strlen(pa);
//	int round = (a-len) / len;
//	int i = 0;
//	//È¡Õû
//	if (round >= 1)
//	{
//		for (i = 0; i < round; i++)
//		{
//			strncat(pa, pa, len);
//		}
//	}
//	//È¡Óà
//	int len2 = strlen(pa);
//	int rem = (a-len2) % len2;
//	int j = 0;
//	char tmp = *(pa + len2);
//	if (rem >= 1)
//	{
//		for (j = 0; j < rem; j++)
//		{
//			*(pa + len2 + j) = *(pa + j);
//
//		}
//	}
//	*(pa + len2 + rem) = tmp;
//}
//int main()
//{
//	int a = 0;
//	char arr[200] = "abcdefgh";
//	scanf_s("%d", &a);
//	move(arr, a);
//	printf("%s", arr);
//
//
//}