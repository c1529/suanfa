//静态生成顺序链表
typedef struct {
	int data[10];   //用静态数组存放数据元素
	int lengeth;
}SqList;
//基本操作——初始化一个线性表
void InitList(SqList& L, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		L.data[i] = i;
	}
	L.lengeth = n;
}
int main()
{
	int n = 5;
	SqList L;
	InitList(L, n);
	for (int i = 0; i < L.lengeth; i++)
	{
		printf("%d\n", L.data[i]);
	}
	printf(" % d", L.lengeth);
	return 0;
}


