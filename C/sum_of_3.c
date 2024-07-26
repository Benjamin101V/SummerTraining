#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    for(a=1;a<=100;a++)
    {
        
        if(a%3==0)
        {
            sum+=a;
        }
        
    }
    printf("%d",sum);
    return 0;
}