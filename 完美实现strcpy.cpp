//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//const修饰，保证代码健壮性 src是被复制的不能改变
//{
//	char* tmp = dest;
//	assert(dest != NULL);//保证指针的有效性
//	assert(src != NULL);
//	while (*dest++ = *src++)//把src指向的字符串拷贝到dest指向的空间，包含‘\0'字符
//	{
//		;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr1[] = "***";
//	char arr2[] = "123";
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}