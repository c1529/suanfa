#include<stdio.h>
//选择排序法
int main()
{
	int arr[10] = { 5,12,11,13,16,19,4,6,2,8 };
	int i, j, k,min;
	for (i = 0; i < 9; i++)
	{
		min = i;
		for (j = i+1; j < 10 ; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
			else
				continue;
		}
		if (i != min)    //让最小的去开头，冒个泡，如果i==min，那么i就是最小的，并且不用换位置
		{
			k = arr[min];
			arr[min] = arr[i];
			arr[i] = k;
		}
		
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
