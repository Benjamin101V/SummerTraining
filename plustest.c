#include<stdio.h>

int main()
{
    int a=1,b=0,c=0;
    b=a++, c=++a;

    printf("%d %d %d\n",a,b,c);

    return 0;


}