//#include <stdio.h>
////也叫共用体
//union wu
//{
//	char c;
//	int a;
//};
//int main()
//{
//	union wu s;
//	/*s.c = 'w';*/
//	s.a = 4;
//	
//	printf("%d\n", sizeof(s));
//	printf("%d\n", s.c);
//
//	printf("%p\n", &s);
//	printf("%p\n" ,&(s.c));
//	printf("%p\n", &(s.a));
//	if (s.c == 4)
//	{
//		printf("小端");
//	}
//	return 0;
//}