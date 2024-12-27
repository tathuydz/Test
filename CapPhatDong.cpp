#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main(){
    //dynamic allocation
    //data_typed *a= (data_type*)malloc(so byte can cap nhat);
    int n=1000;
    int *a=(int *)malloc(n * sizeof(int));
        for(int i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
        }
        free(a); // giai phong bo nho da cap phat
        //long long *b=(long long *)malloc(n * sizeof(long long));
}
//heap
//stack