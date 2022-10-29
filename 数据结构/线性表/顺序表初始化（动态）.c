#include<stdio.h>
#include<stdlib.h>
#define InitSize 10  //默认最大长度为10
typedef struct {
	int* data;     //指示动态分配数组的指针
	int lengeth;   //顺序表当前长度
	int MaxSize;  //顺序表的最大容量
}SqeList;
void InitList(SqeList& L)  //采用malloc函数动态创造顺序表
{
	L.data = (int*)malloc(sizeof(int) * InitSize);
	L.lengeth = 0;     //当前长度
	L.MaxSize = InitSize;   //当前最大容量
}
void IncreaseList(SqeList& L, int len)
{
	int *p=L.data;   //为后续释放空间做准备
  L.data = (int*)malloc(sizeof(int) * (L.MaxSize + len));   // 新开辟的空间
	L.MaxSize = L.MaxSize + len;
	for (int i = 0; i < L.MaxSize; i++)
	{
		L.data[i] = i;
	}
	L.lengeth=L.MaxSize;
  free(p);    //释放原来的空间
}
int main()
{
	int n = 5;
	SqeList L;
	InitList(L);
	IncreaseList(L, n);
	for (int i = 0; i < L.MaxSize; i++)
	{
		printf("%d\n", L.data[i]);
	}
	printf("%d,%d", L.lengeth, L.MaxSize);
	return 0;
}



