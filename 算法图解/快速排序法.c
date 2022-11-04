#include<stdio.h>
void sqsort(int nums[], int low, int high)
{
	int i, j, k, temp, tmp;
	k = nums[low];//保留nums[low]的值，即基数的值
	i = low, j = high;
	while (i > j)
		return ;
	while (i != j)
	{
		while (nums[j] >= k && j > i)
		{
			j--;
		}
		while (nums[i] <= k && j>i)
		{
			i++;
		}
		if (i < j)
/*
交换条件就是两边都有不符合的，当只有一边有不符合的那就是
nums[j]<k,此时i的方向却一直符合，即此时的nums[j]左边全是
小于nums[low](即k)的，最后i==j跳出while循环
*/
		{
			temp = nums[i];
			nums[i] = nums[j];
			nums[j] = temp;
		}
	}
/*
这里探讨为什么要将最后的nums[i](或者说nums[j])给nums[low]而不是nums[high]
一、j到i：（交换过）则最终nums[i]是j循环时候小于nums[low]换过来的，符合
		   (没交换过)则是i=j=low
二、i到j:i到j的条件是j出现了小于nums[low]的值才开始i的循环，此时nums[j]是小于nums[low]的
*/
	nums[low] = nums[j];//用i或者j都行，因为上一段while停止的条件就是i==j,
	nums[j] = k;        //上面用k保留了nums[low]的值
	//减一加一是因为独立出来上一次的基数
	sqsort(nums, low, i - 1);
	sqsort(nums, i + 1, high);
}
int main()
{
	int nums[10] = { 5,12,1,6,8,21,15,11,7,10 };
	int low = 0, high = 9;
	int i, j, k;
	sqsort(nums, low, high);
	for (i = 0; i < 9; i++)
	{
		printf("%d\n", nums[i]);
	}
	return 0;
}

