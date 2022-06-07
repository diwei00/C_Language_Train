#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr[20] = "wuhao\n";
//	char arr2[20] = "hello";
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs(arr, pf);
//	fputs(arr2, pf);
//	
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	char arr[200];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(arr, 200, pf);
//	printf("%s", arr);
//
//	fgets(arr, 200, pf);
//	printf("%s", arr);
//	
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct s
//{
//	int a;
//	float f;
//	char arr[10];
//
//};
//int main()
//{
//	struct s w = { 10,3.14,"wuhao"};
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s ", w.a, w.f, w.arr);
//	fclose(pf);
//	pf = NULL;
//
//
//
//	return 0;
//}*/

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	struct s h = { 0 };
//	fscanf(pf, "%d %f %s", &(h.a), &(h.f), h.arr);
//	printf("%d %f %s", h.a, h.f, h.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcde";
//	FILE* pf = fopen("wu.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	/*fputs(arr, pf);*/
//	fseek(pf, 2, SEEK_SET);//定位文件指针
//	/*int c = fgetc(pf);*/
//	/*printf("%c\n", c);*/
//	int c = ftell(pf);
//	printf("%d", c);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}