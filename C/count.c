#include<stdio.h>

int main()
{
    int count;
    for(int a=1;a<=100;a++){
        int i=a;
        while(i>0){
            if( i%10==9){
                count++;
            }
            i/=10;
        }
    }
    printf("%d",count);

    return 0;
}