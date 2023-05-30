/*
输入：nums = [2, 7, 11, 15], target = 9
输出：[0, 1]
解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。
*/
#include<stdio.h>
#include<stdlib.h>
// 定义函数
int* twoSum(int nums[], int numSize, int target, int* returnSize)
{
    for (int i=0;i<numSize;i++)
    {
        for(int j=i+1;j<numSize;j++){
            if(nums[i]+nums[j]==target){
                int* ret = malloc(sizeof(int)*2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main()
{
    int arr1[4] = {1,5,6,9};
    int target = 10;
    int* returnSize;
    int* ret;
    ret =twoSum(arr1, 4, target,returnSize);
    printf("数组的长度是：%d\n", *returnSize);
    printf("第一个数的位置是:%d\n第二个数的位置是:%d", ret[0],ret[1]);
    return 0;
}


