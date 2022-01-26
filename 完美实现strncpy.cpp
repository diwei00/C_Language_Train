//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	char* dest = str1;
//	while (count && (*str1++ = *str2++))
//	{
//		count--;
//	}
//	*str1 = 0;
//	if (count)
//	{
//		while (--count)
//		{
//			*str1++ = '\0';
//		}
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "qwer";
//	my_strncpy(arr1, arr2,2);
//	printf("%s",arr1);
//	return 0;
//}