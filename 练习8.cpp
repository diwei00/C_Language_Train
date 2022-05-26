//#include <stdio.h>
//int search(int* nums, int numsLen, int target) {
//    // write code here
//    if (numsLen == 0)
//    {
//        return -1;
//    }
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) >> 1;
//        if (nums[mid] < target)
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid] > target)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            int i = 0;
//            for (i = 0; i < mid; i++)
//            {
//                if (nums[i] == target)
//                {
//                    return i;
//                }
//            }
//            return mid;
//        }
//    }
//    if (nums[left] == target)
//    {
//        return left;
//    }
//    else
//    {
//        return -1;
//    }
//
//}
//
//int main()
//{
//    int arr[] = {-2, 1, 2};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int n = -2;
//    int tmp = search(arr, sz, n);
//    printf("%d", tmp);
//    return 0;
//}