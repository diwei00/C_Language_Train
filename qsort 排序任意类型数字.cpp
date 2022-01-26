//#include <stdio.h>
//#include <stdlib.h>
//int arr_cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//
//}
//void print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), arr_cmp);
//	print(arr,sz);
//	/*int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;*/
//}
//
////浮点数
//#include <stdio.h>
//#include <stdlib.h>
//int f_cmp(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void print(float* pf, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", *(pf + i));
//	}
//
//}
//int main()
//{
//	float arr[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), f_cmp);
//	print(arr, sz);
//
//}
//
////结构体
//typedef struct ifm
//{
//	int age;
//	char name[20];
//	char sex[10];
//}ifm;
//int w_age(const void* e1, const void* e2)
//{
//	return ((ifm*)e1)->age - ((ifm*)e2)->age;
//
//
//}
//int main()
//{
//	ifm w_arr[3] = { {59,"wuhao","男"},{25,"wuxi","女"},{28,"liming","男"} };
//	int sz = sizeof(w_arr) / sizeof(w_arr[0]);
//	qsort(w_arr, sz, sizeof(w_arr[0]), w_age);
//
//	return 0;
//}
