#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//void swep(char* a, char* b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void reverse_string(char* string, int left, int right)
//{
//	if (left > right)
//	{
//		return;
//	}
//	reverse_string(string, left + 1, right - 1);
//	swep(&string[left], &string[right]);
//
//}
//int main()
//{
//	char string[] = "abcdef";
//	int sz = strlen(string);
//	reverse_string(string, 0, sz - 1);
//	printf("%s", string);
//	return 0;
//}
//#include <stdio.h>
//int DigitSum(int n)
//{
//	static int sum = 0;
//	if (n < 9)
//	{
//		sum += n;
//		return 0;
//	}
//	DigitSum(n / 10);
//	sum += (n % 10);
//	return sum;
//
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d", ret);
//
//	return 0;
//}
//#include <stdio.h>
//int fun(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n * fun(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	int ret = fun(n, k);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	return 0;
//}

//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
//{
//    if (list1 == NULL)
//    {
//        return list2;
//    }
//    if (list2 == NULL)
//    {
//        return list1;
//    }
//    struct ListNode* head = NULL;
//    struct ListNode* tail = NULL;
//    while (list1 && list2)//同时遍历两链表
//    {
//        if (list1->val < list2->val)
//        {
//            if (tail == NULL)//第一次链接
//            {
//                head = list1;
//                tail = list1;
//                list1 = list1->next;
//            }
//            else//已经有结点之后的链接
//            {
//                tail->next = list1;
//                tail = tail->next;
//                list1 = list1->next;
//            }
//        }
//        else
//        {
//            if (tail == NULL)
//            {
//                head = list2;
//                tail = list2;
//                list2 = list2->next;
//
//            }
//            else
//            {
//                tail->next = list2;
//                tail = tail->next;
//                list2 = list2->next;
//            }
//        }
//    }
//    if (list1 == NULL)//list1先遍历完
//    {
//        tail->next = list2;
//    }
//    if (list2 == NULL)//list2先遍历完
//    {
//        tail->next = list1;
//    }
//    return head;
//}
//bool hasCycle(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast != NULL && fast->next != NULL)//单链表跳出条件 奇数和偶数 
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)//追及到的条件
//        {
//            return true;
//        }
//    }
//    return false;
//}
//#include <stdio.h>
//void swap(int* arr1, int* arr2, int n)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1, arr2, sz1);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	int j = 0;
//	for (j = 0; j < sz1; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//void Init(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int* arr, int left, int right)
//{
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, 0, sz - 1);
//	Print(arr, sz);
//	printf("\n");
//	Init(arr, sz);
//	Print(arr, sz);
//
//	
//	return 0;
//}
//#include <stdio.h>
//void swap(int* a1, int* a2)
//{
//	int tmp = *a1;
//	*a1 = *a2;
//	*a2 = tmp;
//}
//void BubbleSort(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //输入数据个数
//    int n = 0;
//    scanf("%d", &n);
//    //输入数据
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    //输入要删除的数据
//    int del = 0;
//    scanf("%d", &del);
//
//    //遍历数组，找到要删除下标,存入数组arr1
//
//    int count = 0;
//    int arr1[20] = { 0 };
//    int j = 0;
//    int p = 0;
//    for (j = 0; j < n; j++)
//    {
//        if (arr[j] == del)
//        {
//            count++;
//            arr1[p] = j;
//            p++;
//        }
//    }
//    //移动后面的数字
//    int t = 0;
//    int tmp = 0;
//    int sz = n;
//    for (t = 0; t < count; t++)
//    {
//        tmp = arr1[t];
//        while (tmp <= sz - 2)
//        {
//            arr[tmp] = arr[tmp + 1];
//            tmp++;
//        }
//        //遍历下标数组arr1，下标往后都减1
//        int i = 0;
//        for (i = t + 1; i < count; i++)
//        {
//            arr1[i]--;
//        }
//
//        sz--;
//    }
//
//    int k = 0;
//    //判断数组内有无被删数据
//    if (count != 0)
//    {
//        n = n - count;
//    }
//
//    //打印数组
//    for (k = 0; k < n; k++)
//    {
//        printf("%d ", arr[k]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char arr[10] = { 0 };
//    int i = 0;
//    int p = 0;
//    int count = 0;
//    while (scanf("%c", &arr[p++]) != EOF)
//    {
//        count++;
//    }
//    //遍历数组
//    int j = 0;
//    for (j = 0; j < count; j++)
//    {
//        if (arr[j] >= 65 && arr[j] <= 90)
//        {
//            arr[j] += 32;
//        }
//        else
//        {
//            arr[j] -= 32;
//        }
//    }
//    int k = 0;
//    for (k = 0; k < count; k++)
//    {
//        printf("%c\n", arr[k]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d ", 100);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//
//	int money = 0;
//	scanf_s("%d", &money);
//	int num = money;
//	int empty = money;
//
//	while (empty >= 2)
//	{
//		num += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", num);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[100] = { 0 };
//    gets(str);
//    int len = strlen(str);
//    int i1 = 0;
//    int j1 = 0;
//    int i2 = 0;
//    int j2 = len - 1;
//    //找最后一个单词的首元素
//    int k = len - 1;
//    for (k = len; k >= 0; k--)
//    {
//        if (str[k] == ' ')
//        {
//            return k;
//        }
//    }
//    i2 = k - 1;
//    //找第一个单词的尾元素
//    int l = 0;
//    for (l = 0; l < len - 1; l++)
//    {
//        if (str[l] == ' ')
//        {
//            return l;
//        }
//    }
//    j1 = l - 1;
//    //开辟一个同样大的数组
//    char tmp[100] = { 0 };
//    int end = len - 1;
//    int begin = 0;
//    //把第一个单词给最后面拷
//    int k2 = 0;
//    for (k2 = j1; k2 >= i2; k2--)
//    {
//        tmp[end] = str[k2];
//        end--;
//    }
//    //把最后一个单词给第一个拷
//    int k3 = 0;
//    for (k3 = i2; k3 <= j2; k3++)
//    {
//        tmp[begin] = str[k3];
//        begin++;
//    }
//
//    return 0;
//}