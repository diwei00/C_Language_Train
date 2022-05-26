#include <stdio.h>
#include <stdlib.h>
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void sort(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void Copy_Pa(int* arr, int* pa, int n)
{
	int left = 0;
	int right = n - 1;
	int begin = 0;
	
	while (left <= right)
	{
		pa[begin] = arr[left];
		if (left != right)
		{
			begin++;
			pa[begin] = arr[right];
			begin++;
			left++;
			right--;
		}
		else
		{
			left++;
			right--;
		}
		
		

	}
}
void Copy_Arr(int* arr, int* pa, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = pa[i];
	}
}
int main()
{
	int arr[] = { 9,1,4,2,3,6,5,8,7 ,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	int* pa = (int*)malloc(sizeof(int) * sz);
	if (pa != NULL)
	{
		Copy_Pa(arr, pa, sz);
		Copy_Arr(arr, pa, sz);
	}
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	free(pa);
	return 0;
}