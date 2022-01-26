void swep(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;

}
void bubble_sort(int* arr, int sz)
{
	int i, j;
	int flag = 0;
	for (i = 0; i < 10; i++)//确定冒泡排序的趟数
	{
		for (j = 0; j < sz - 1 - i; j++)//每一趟
		{
			int tmp = 0;
			if (arr[j] > arr[j + 1])
			{
				swep(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
#include <stdio.h>
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int k = 0;
	for (k = 0; k < 10; k++)
		printf("%d", arr[k]);
	return 0;
}