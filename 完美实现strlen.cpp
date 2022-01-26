//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* pa)//const修饰，保证传过来的不会被改变，增加代码的健壮性
//{
//	assert(pa != NULL);//断言  保证指针的有效性  当传地址时记得用断言
//	int count = 0;
//	while (*pa != 0)
//	{
//		count++;
//		pa++;
//
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "wuhao";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}