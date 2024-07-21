#include <stdio.h>
 int main()
 {
    int a;
    for((scanf("%d", &a)); a!=0;a/=10 )
    {
        printf("%d ", a%10);
    }
    printf("\n");
    
    
    

    return 0;
 }