#include<stdio.h>
int main()
{
    int x;
    printf("the input is: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}