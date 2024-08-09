#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    scanf("%d",&k);
    int sz=sizeof(arr)/sizeof(arr[0]);

    int left=0;
    int right=sz-1;
    //int flag=0

    while(left<=right){
        int mid=left+(right-left)/2;  //average value

        if(arr[mid]<k){
            left=mid+1;
        }
        else if(arr[mid]>k){
            right=mid-1;
        }
        else{
            printf("Get it\n");
            printf("%d",arr[mid]);
            //flag=1;
            break;
        }
        if(left>right){    //flag=0
            printf("False\n");
        }
    }

    return 0;
}