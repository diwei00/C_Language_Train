//#include <stdio.h>
//int tmp_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & n - 1;
//		count++;
//	}
//	return count;
//}
//
//int  different(int a, int b)
//{
//	int tmp = 0;
//	tmp = a ^ b;
//	return tmp_one(tmp);
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int count = different(a, b);
//	printf("%d", count);
//
//	return 0;
//}