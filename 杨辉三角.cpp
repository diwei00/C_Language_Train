#include <stdio.h>
int main()
{
	int arr[20] = { 1};
	int arr2[20] = { 0 };
	int i = 1;
	int tmp = 0;
	int index = 0;
	for (i = 0; i <= 10; i++)
	{
		int j = 0;
		for (j = 0; j < 20 - 2 * i; j++)
		{
			printf(" ");
		}
		tmp = 0;
		for (j = 1; j <= i + 1; j++)
		{

			
			if (i >= 2)
			{
				if (j == 1)
				{
					//打印最前面的1
					printf("%3d   ", arr[index]);
					arr2[tmp++] = arr[index];
					//把每行打印的数据存入arr2中
				}
				else if (j == i + 1)
				{
					//打印最后面的1
					printf("%3d   ", arr[index]);
					arr2[tmp++] = arr[index];
				}
				else
				{
				    //打印中间的数
					printf("%3d   ",(arr[j - 2] + arr[j - 1]));
					arr2[tmp++] = (arr[j -2 ] + arr[j - 1]);
				}
			}
			else
			{
				//打印前两行
				printf("%3d   ", arr[index]);
				arr2[tmp++] = arr[index];
			}
		}
		//拷贝arr2到arr中
		for (j = 0; j < tmp; j++)
		{
			arr[j] = arr2[j];
		}

		printf("\n");
	}
	return 0;
}