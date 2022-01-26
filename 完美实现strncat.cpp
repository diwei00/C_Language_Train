//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	char* dest = str1;
//	while (*str1 != 0)
//	{
//		str1++;
//	}
//	while (count--)
//	{
//		if (!(*str1++ = *str2++))
//		{
//			return dest;
//		}
//	}
//	*str1 = '\0';
//	return dest;
//}
//int main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "qwer";
//	my_strncat(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}