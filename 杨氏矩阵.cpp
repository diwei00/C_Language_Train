//#include <stdio.h>
//int find_num(int arr[3][3],int k,int* px,int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y <= *py - 1)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, 7, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d %d", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}