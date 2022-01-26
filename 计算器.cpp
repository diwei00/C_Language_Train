//#include <stdio.h>
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
//		switch (input)
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