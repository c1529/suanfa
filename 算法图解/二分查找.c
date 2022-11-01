#include<stdio.h>
int main()
{
	int arr[10] = { 1,6,9,12,15,16,27,28,39,50 };
	int i, j, k,low=0,high=9;
	int e = 39;
	while (low <= high )
	{
		k = (low + high) / 2;
		if ( arr[k] == e)
		{
			printf("%d",k+1);
			break;
		}
		if (arr[k] > e)
		{
			high = k-1;  //加1减1可以看作一个新的查找，因为上次查找没有目标
		}                //所以让K为low或high，没用
		if (arr[k] < e)
		{
			low = k+1;
		}
	}
	return 0;
}

