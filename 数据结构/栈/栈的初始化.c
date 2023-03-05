#include<stdio.h>
#define MaxSize 10
//定义静态顺序栈
typedef struct {
	int data[MaxSize];
	int top;
}SqStack;

//定义链栈
typedef struct Linknode{
	int data;                //数据域
	struct Linknoode* next;  //指针域
}LiStack;

//初始化栈
void InitStack(SqStack &S)
{
	S.top = -1;
}
//判断栈是否为空
bool StackEmpty(SqStack S)
{
	if (S.top == -1)   //栈空
		return true;
	else
		return false;   //栈非空
}
//新元素进栈
bool Push(SqStack& S, int n)
{
	if (S.top == MaxSize - 1)  //栈满，报错
		return false;
	S.top++;
	S.data[S.top] = n;
	return true;
}
//出栈
bool Pop(SqStack& S,int n)
{
	if (S.top == -1)
		return false;
	n = S.data[S.top];   //数据还残留在内存中，只是逻辑上被删除了
	S.top--;
	return true;
}
//读栈顶元素
bool GetTop(SqStack S, int *n)
{
	if (S.top == -1)
		return false;
	*n = S.data[S.top];
	return true;
}
int main()
{
	SqStack S;       //定义一个栈
	InitStack(S);    //初始化栈
	int i;
	for (int i = 1; i <= 10; i++)
	{
		Push(S, 2 * i + 1);
	}
	GetTop(S, &i);
	printf("%d", i);
	return 0;
}


