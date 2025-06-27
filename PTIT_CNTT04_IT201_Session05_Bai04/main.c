#include <stdio.h>

int sum(int n,int m) {
    if (n>m) {
        return 0;
    }
    return n+sum(n+1,m);
}
int main() {
    int firstNum, secondNum;
    printf("Moi ban nhap vao so thu nhat:\n ");
    scanf("%d", &firstNum);
    if (firstNum<0) {
        printf("du lieu nhap vao khong hop le\n");
        return 0;
    }
    printf("Moi ban nhap vao so thu hai:\n ");
    scanf("%d", &secondNum);
    if (secondNum<0) {
        printf("du lieu nhap vao khong hop le\n");
        return 0;
    }
    int result=sum(firstNum,secondNum);
    printf("%d",result);
    return 0;
}
