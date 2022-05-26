//#include <assert.h>
//#include <stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcdefg";
//	int len = my_strlen(str);
//	printf("%d", len);
//
//	return 0;
//}
//#include <assert.h>
//#include <stdio.h>
//void my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = '\0';
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "fghijk";
//	my_strcpy(arr1, arr2);
//
//	printf("%s", arr1);
//	return 0;
//}
//#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void sort(int* arr, int n)
//{
//	
//	int prev = 0;
//	int cur = 0;
//	while (cur <= n)
//	{
//		if (arr[cur] % 2 != 0)
//		{
//			swap(&arr[prev], &arr[cur]);
//			prev++;
//			cur++;
//			
//		}
//		else
//		{
//			cur++;
//			
//		}
//	}
//}
//int main()
//{
//
//	int arr[] = { 1,2,3,8,3,4,5,6,7,8,9,10,11,12 ,12,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("^%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int tmp = pow(2,pow(10,2))
//	return 0;
//}