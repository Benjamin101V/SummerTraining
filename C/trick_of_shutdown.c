#include<stdio.h>
#include<windows.h>
#include<string.h>

int main()
{
    char input[20]={0};
    system("shutdown /s /t 60");
    again:
    printf("Your PC will shut down in 60 seconds,input 'I'm a pig'to cancle");
    scanf("%s",input);

    if(strcmp(input,"I'm a pig")){
        system("shutdown /a");
        printf("Shutdown cancelled");
    }
    else{
        goto again;
    }
    return 0;
}