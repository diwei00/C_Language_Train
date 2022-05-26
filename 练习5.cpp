//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    unsigned int n = 0;
//    scanf_s("%d", &n);
//    int arr[100] = { 0 };
//    int index = 0;
//    while (n)
//    {
//        if (n % 10 % 2 == 0)
//        {
//            arr[index] = 0;
//            index++;
//            n /= 10;
//        }
//        else
//        {
//            arr[index] = 1;
//            index++;
//            n /= 10;
//        }
//    }
//    int sum = 0;
//    int i = 0;
//    for (i = index -  1; i >= 0; i--)
//    {
//        sum += arr[i] * pow(10, i);
//    }
//    printf("%d", sum);
//
//    return 0;
//}