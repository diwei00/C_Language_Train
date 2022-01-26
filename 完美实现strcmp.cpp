//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "qwer";
//	char arr2[] = "qwer";
//	int ret =  my_strcmp(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("大于");
//	}
//	else if (ret == 0)
//	{
//		printf("等于");
//	}
//	else
//	{
//		printf("小于");
//	}
//
//	return 0;
//}