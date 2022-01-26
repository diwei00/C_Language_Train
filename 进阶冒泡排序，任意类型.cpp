//int cmp(void* e1,void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void swap(char* buff1, char* buff2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = tmp;
//		buff1++;
//		buff2++;
//	}
//}
// void bubble_sort(void* base, int sz, int width,int(*cmp)(void* e1,void* e2))
//{
//	 int i = 0;
//	 for (i = 0; i < sz - 1; i++)
//	 {
//		 int j = 0;
//		 for (j = 0; j < sz - 1 - i; j++)
//		 {
//			 if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			 {
//				 swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//
//			 }
//		 }
//	 }
//}
//void text1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//}
//int main()
//{
//	text1();
//	return 0;
//}