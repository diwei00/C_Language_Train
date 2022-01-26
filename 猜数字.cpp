//#include <stdio.h>
//void menu()
//{
//	printf("****************************\n");
//	printf("***** 1.play    0.elit  *****\n");
//	printf("****************************\n");
//
//}
//void game()
//{
//	int wu = 8;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf_s("%d", &guess);
//
//		if (guess > wu)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < wu)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
// }
//int main()
//{
//	
//	int input = 0;
//	do
//	{
//		menu(); 
//		printf("请选择》：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		    case 1:
//				game();  
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//			    printf("选择错误\n");
//				break;
//		}
//	} while (input);
//
//
//	return 0;
//}