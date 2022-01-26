//#include <stdio.h>
//int main()
//{
//	int wu[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = wu[0];
//	int sz = sizeof(wu) / sizeof(wu[0]);
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (max < wu[i])
//		{
//			max = wu[i];
//		}
//	}
//
//	printf("max = %d", max);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%dx%d = %-2d ",i,j, i * j);//左对齐，不够的用空格补
//		printf("\n");
//	}
//
//	return 0;
//}