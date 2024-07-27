#include<stdio.h>
int main()
{
    int a,b;
    float c;
    for(a=1;a<=99;a+=2){
        for(b=2;b<=100;b+=2){

            c==(1/a) - (1/b);
        }
    }
    printf("%f",c);

    return 0;
}