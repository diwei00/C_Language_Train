//#include <string.h>
//#include <stdio.h>
//void reverse(char* str, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[101] = { 0 };
//    gets_s(str);
//    int len = strlen(str);
//    reverse(str, 0, len - 1);
//
//    int begin = 0;
//    int end = 0;
//    while (str[begin] != '\0')
//    {
//        while (1)
//        {
//            if (str[end] == ' ' || str[end] == '\0')
//            {
//                break;
//            }
//            end++;
//        }
//        reverse(str, begin, end - 1);
//        if (str[end] != '\0')
//        {
//            end++;
//        }
//
//        begin = end;
//    }
//    printf("%s", str);
//
//    return 0;
//}