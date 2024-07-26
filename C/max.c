#include<stdio.h>
int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int max=num[0];

    for(int i=1;i<10;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    printf("%d ",max);

    return 0;

}
