//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100000; i++)
//    {
//        int n  = 1;
//        int tmp = i;
//        //计算i的位数
//        while (tmp /= 10)
//        {
//            //tmp=tmp/10
//            n++;
//        }
//        //计算每一位的n次方之和
//        int sum = 0;
//        tmp = i;
//        while (tmp)
//        {
//            sum += pow(tmp % 10, n);
//            tmp /= 10;
//        }
//        //判断i是否为自幂数
//        if (i == sum)
//        {
//            printf("%d ", sum);
//        }
//
//
//    }
//    return 0;
//}