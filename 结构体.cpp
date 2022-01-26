//#include <stdio.h>
//#include <string.h>
//
//结构体关键字   结构体标签    统称结构体类型
//struct book
//{
//    char name[50];
//    short price;
//
//};//分号结束类型定义
//int main()
//{
//
//    //利用结构体类型创建一个该类型的结构体变量
//    struct book wuhao = { "吴浩好帅",88 };
//    //strcpy(wuhao.name, "wuhao....");
//    printf("%s\n", wuhao.name);
//    printf("%d\n", wuhao.price);
//    struct book* pb = &wuhao;//取地址
//    printf("%s\n",(*pb).name);
//    printf("%d\n", (*pb).price);
//    printf("%s\n", pb->name);
//    return 0;
//}

//#include <stdio.h>
//typedef struct inm
//{
//	char name[50];
//	int age;
//	char sex[20];
//
//}inm;
//int main()
//{
//	inm wuhao = { "wuhao",19,"男" };
//	inm* pa = &wuhao;
//	printf("%s\n", wuhao.name);
//	printf("%d\n", (*pa).age);
//	printf("%s\n", pa->sex);
//	return 0;
//}