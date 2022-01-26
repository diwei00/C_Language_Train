//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 10;
//	int wu[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(wu) / sizeof(wu[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (a == wu[i])
//		{
//			printf("a = %d   找到了", a);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	
//}

// 二分法找数字  优化算法
//#include <stdio.h>
//int main()
//{
//	int wu[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(wu) / sizeof(wu[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (wu[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (wu[mid] < k)
//		{
//			left = left + 1;
//
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//
//		printf("找不到\n");
//	}
//
//	return 0;
//////}