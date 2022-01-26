//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(char* pa1, char* pa2)
//{
//	assert(pa1 != NULL);
//	assert(pa2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cul = pa1;
//	if (*pa2 == '\0')
//	{
//		return pa1;
//	}
//	while (*cul)
//	{
//		s1 = cul;
//		s2 = pa2;
//		while ((*s1 != '/0') && (*s2 != '/0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cul;//找到了
//		}
//		cul++;
//	}
//	return NULL;//找不到
//
//}
//int main()
//{
//	char arr1[] = "abbbcdefg";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了");
//	}
//
//	return 0;
//}