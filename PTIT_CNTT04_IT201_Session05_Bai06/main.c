#include <stdio.h>
#include <stdlib.h>

void insertArray(int **arr,int *length) {
    printf("moi ban nhap vao so luong phan tu cua mang:\n");
    scanf("%d",length);
    *arr=(int*)calloc(*length,sizeof(int));
    for(int i=0;i<*length;i++) {
        printf("moi ban nhap vao phan tu arr[%d]:",i);
        scanf("%d",&(*arr)[i]);
    }
}
int sumArray(int *arr,int length,int index) {
    if (index==length) {
        return 0;
    }
    return arr[index]+sumArray(arr,length,index+1);
}
int main() {
    int *arr;
    int n;
    insertArray(&arr,&n);
    int result=sumArray(arr,n,0);
    printf("Tong cua mang la:%d\n",result);
    return 0;
}
