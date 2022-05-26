//#include <stdio.h>
//#include <math.h>
//int reverse(int x) {
//    // write code here
//    if (x >= pow(2, 31) - 1)
//    {
//        return 0;
//    }
//    int arr[20] = { 0 };
//    int index = 0;
//    int tmp = 0;
//
//    if (x > 0)
//    {
//        while (x)
//        {
//            arr[index] = x % 10;
//            index++;
//            x /= 10;
//        }
//        int i = 0;
//        for (i = 0; i < index; i++)
//        {
//            tmp += arr[i] * pow(10, (int)(index - 1 - i));
//        }
//        return tmp;
//    }
//    else
//    {
//        x = -x;
//        while (x)
//        {
//            arr[index] = x % 10;
//            index++;
//            x /= 10;
//        }
//        int i = 0;
//        for (i = 0; i < index; i++)
//        {
//            tmp += arr[i] * pow(10, (int)(index - 1 - i));
//        }
//        return -tmp;
//    }
//}
//
//int main()
//{
//    int tmp = reverse(2123456789);
//    printf("%d", tmp);
//
//    return 0;
//}