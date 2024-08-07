#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void menu()      //UI界面
{
    printf("*********************\n");
    printf("****** 1.Login ******\n");
    printf("****** 0.Cancle *****\n");
    printf("*********************\n");
}

int main()
{
    char name[6] = "admin";
    char password[6] = "admin";
    int choose = 0;

    menu();
    printf("please choose:");
    scanf("%d", &choose);

    do
    {
        //menu();
        //printf("please choose:");
        //scanf("%d",&choose);

        printf("name:");
        scanf("%s", &name);
        printf("password:");
        scanf("%s", &password);

        //使用strcmp函数比较
        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0) {
            printf("Login Success!\n");
            break;
        }
        else {
            printf("Login Fail!\n");
        }

    } while (choose);

    return 0;
}