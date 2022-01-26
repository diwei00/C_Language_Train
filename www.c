//#include <stdio.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr1[] = { 5,1,2,3,4 };
//	int arr2[] = { 0 };
//	struct s s2[2] = { 0 };
//	struct s arr3[] = { {"wuhao",19},{"wuxi",25} };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(s2, arr3, sizeof(arr3));
//	return 0;
//}