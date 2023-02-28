#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数字：\n");
    scanf("%d",&n);
    if(n<=0||n!=0&&n%10==0)
        printf("不是回文数");
    else
    {
        int div=1;
        int left=0;
        int right=0;
        int a=1;
        //算出n的最高位
        while(n/div>=10)
        {
            div*=10;
        }
        while(n>0)
        {
            left=n/div;
            right=n%10;
            if(left!=right)
            {
                a=0;
                break;
            }
            else
                a=1;
            n=(n%div)/10;
            div=div/100;
        }
        if(a==1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}



