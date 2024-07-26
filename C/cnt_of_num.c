#include <stdio.h>

int main()
{
    int a;
    int cnt = 0;
    while(scanf("%d",&a)!=EOF)
    {
        do
        {
            a/=10;
            cnt++;
            break;//单次计数完成后跳出循环，防止再次计数时数据叠加
        }while(a);

        printf("%d\n",cnt);
        
    }   
    return 0;
}