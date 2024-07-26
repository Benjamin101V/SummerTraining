#include <stdio.h>


int main()
{
    int n = 0;
    while(scanf("%d", &n)!=EOF)
    {
       for (int i=0;i<n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}