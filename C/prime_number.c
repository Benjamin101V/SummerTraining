#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        for( ;a<=b;a++){
            int flag =1;
            int i;
            for(i=2;i<=sqrt(a);i++){
                if(a%i==0){
                    flag =0;
                    break;
                }
            }
            if(flag==1){
                printf("%d ",a);
            }
        }
    }

    return 0;
} 