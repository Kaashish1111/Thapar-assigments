#include<stdio.h>
int main(){
    int a[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int b[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    int c[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}