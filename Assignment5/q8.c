#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
        max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Maximum element in array is: %d and minimum element is:%d",max,min);
    return 0;
}