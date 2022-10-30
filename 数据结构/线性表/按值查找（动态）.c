#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10
typedef struct {
	int* data;
	int Lengeth;
}SqList;
void InitList(SqList& L, int n)
{
	L.data = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		L.data[i] = i*i;
	}
	L.Lengeth = n;
}
//顺序表的按值查找
int  GetList(SqList& L, int j)
{
	
	int i;
	for (i = 0; i < L.Lengeth; i++)
	{
		if (L.data[i] == j)
			return i + 1;
	}
	return 0;
}
int main()
{
	int n = 5;
	int i = 9;
	SqList L;
	InitList(L, n);
	int a=GetList(L, i);
	printf("%d", a);
	return 0;
}











