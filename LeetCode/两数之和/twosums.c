/*
输入：nums = [2, 7, 11, 15], target = 9
输出：[0, 1]
解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
*/
#include<stdio.h>
#include<malloc.h>
int* ff(int nums[], int target)
{
	int n = sizeof(nums) / sizeof(int);
	int* ret = (int *)malloc(sizeof(int)*2);
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				ret[0] = i;
				ret[1] = j;
				return ret;
			}
		}
	}
	return NULL;
}
int main()
{
	int nums[4] = { 2,7,11,15 };
	int target = 9;
	int* out;
	out = ff(nums, target);
	printf("%d %d", out[0], out[1]);
	free(out);
	return 0;
}
































