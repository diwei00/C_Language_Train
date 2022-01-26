//#include <stdio.h>
//void exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//void print(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//
//
//}
//int main()
//{
//	int arr1[5] = { 0,1,2,3,4 };
//	int arr2[5] = { 4,3,2,1,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	exchange(arr1,arr2,sz);
//	print(arr1, arr2, sz);
//	return 0;
//}