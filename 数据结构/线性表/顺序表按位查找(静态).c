#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int Lengeth;
}SqList;
void InitList(SqList& L, int n)
{
	for (int i = 0; i < n; i++)
	{
		L.data[i] = i;
	}
	L.Lengeth = n;
}
//顺序表的查找
bool GetList(SqList& L, int i, int& e)
{
	if (i<1 || i>L.Lengeth)
		return false;
	e = L.data[i - 1];
}
int main()
{
	int n = 5;
	int i = 3;
	int e;
	SqList L;
	InitList(L, n);
	GetList(L, i, e);
	printf("%d", e);
	return 0;
}











