//#include <stdio.h>
//int test(const char* pa)
//{
//	int count = 0;
//	while (*pa != 0)
//	{
//		count++;
//		pa++;
//	}	
//	return count;
//
//}
//int main()
//{
//
//	char arr[] = "wuhao";
//	test(arr);
//	printf("%d",test(arr));
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *(arr+i));
//	}
//	return 0;
//}
//void menu()
//{
//	printf("*****************************\n");
//	printf("**1.add          2.sub     **\n");
//	printf("**3.mul          4.div     **\n");
//	printf("*******    0.exit     *******\n");
//	printf("*****************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入二个值\n");
//	scanf_s("%d%d", &a, &b);
//	printf("%d\n", pf(a, b));
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d", &input);
//		switch(input)
//		{
//		case 1:
//			calc(Add);
//			//printf("%d\n", Add(a, b));
//			break;
//		case 2:
//			calc(Sub);
//			//printf("%d\n", Sub(a, b));
//			break;
//		case 3:
//			calc(Mul);
//			/*printf("%d\n", Mul(a, b));*/
//			break;
//		case 4:
//			calc(Div);
//			//printf("%d\n", Div(a, b));
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//void print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		pa += i;
//		printf("%d " *pa);
//
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//}
//#include <stdio.h>
//int main()
//{
//
//	//int arr[3][2] = { 0 };
//	///*int* p;
//	//p = &arr[0][0];*/
//	///*printf("%p\n",p);*/
//	//int(*pa)[2];
//	//pa = arr;
//	//printf("%p\n", pa);
//	//printf("%p\n", &arr[0][0]);
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf_s("%d%d", &a,&n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//编程计算 ，x和n由键盘输入，将 定义为函数，并在main函数中调用。
//#include <stdio.h>
//#include <math.h>
//
//void wuhao(int x, int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += pow(x, i);
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int x, n;
//	scanf_s("%d%d", &x, &n);
//	wuhao(x, n);
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//void wuhao(char* ps)
//{
//	int i = 0;
//	int tmp = strlen(ps);
//	char* left = ps;
//	char* right = ps + tmp - 1;
//	while (left<right)
//	{
//		/*char flag = *left;*/
//		if (*left == *right)
//		{
//			left++;
//			right--;
//			i++;
//		}
//		else
//		{
//			printf("不对称");
//			break;
//		}
//	}
//	if (i == tmp / 2)
//	{
//		printf("对称");
//	}
//}
//int main()
//{
//	char str_arr[100] = "0";
//	scanf_s("%s", str_arr,100);
//	wuhao(str_arr);
//	return 0;
//#include <stdio.h>
//int main()
//{
//	int a = 2;
//	++a;
//	printf("%d %d", ++a,a);
//
//	return 0;
//}
//# include <stdio.h>
//int main()
//{
//    int  a = 0, i;
//    for (i = 1; i < 5; i++)
//    {
//        switch (i)
//        {
//            case 0:
//            case 3:a += 2;
//            case 1:
//            case 2:a += 3;
//            default:a += 5;
//        }
//    }
//    printf("%d%d", ++a, a);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 1;
//	int k = 2;
//
//	printf("%d", ++i || --j && ++k);
//	printf("%d", k);
//	return 0;
//}
//int main()
//{
//
//
//	int s = 0, a = 1, n;
//	scanf_s("n=%d", &n);
//	do
//	{
//		s += 1;
//		a = a - 2;
//	} while (a != n);
//	printf("%d\n", s);
//
//
//	return 0;
//}

//int main()
//{
//	int i, n = 0;
//	for (i = 2; i < 5; i++)
//	{
//		do
//		{
//			if (i % 3)
//				continue;
//			n++;
//		} while (!i);
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	/*int a = 0;
//	int b = 0;
//	scanf_s("a=%db=%d", &a, &b);
//	printf("%d%d\n", a, b);*/
//
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 3;
//	int c = 6;
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("%d", max);
//	
//	return 0;
//}
//int main()
//{
//	int arr[8];
//	/*arr[3 < 5] = 1;
//	arr[1 + 2] = 2;*/
//
//}
//int main()
//{
//	double a = 2;
//	switch ((int)a)
//	{
//	case 1+1:
//		printf("aaaaa");
//
//	default:
//		break;
//	}
//
//}
//int main() 
//{
//    int  a = -2;
//    int b = 0;
//    while (a++ && ++b)
//    {
//        ;
//    }
//    printf("%d,%d\n", a, b);
//}
//int main(void)
//{
//	int  t[7] = { 11,13,14,15,16,17,18 }, i = 0, k = 0;
//	while (i < 7 && t[i] % 2) { k = k + t[i]; i++; }
//	printf("%d", k);
//}
//int  main(void)
//{
//	int  a[5] = { 0 }, i, k = 2;
//	for (i = 0; i < k; i++)  a[i] = a[i] + 1;
//	printf("%d", a[k]);
//}
//int main()
//{
//	int arr[4] = {};
//	return 0;
//}
//int  main(void)
//{
//	int  s[12] = { 1,2,3,4,4,3,2,1,1,1,2,3 }, c[5] = { 0 }, i;
//	for (i = 0; i < 12; i++) c[s[i]] ++;
//	for (i = 0; i < 5; i++) printf("%d", c[i]);
//	printf("\n");
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "qwer";
//	strncpy_s(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	memmove(arr+2, arr , 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stddef.h>
//struct s
//{
//	char c;
//	int a;
//	int i;
//	double b;
//};
//int main()
//{
//	struct s w = { 0 };
//	printf("%d",offsetof(struct s, c));
//	printf("%d", offsetof(struct s, i));
//	printf("%d", offsetof(struct s, b));
//	printf("%d", sizeof(w));
//
//
//
//	return 0;
//}