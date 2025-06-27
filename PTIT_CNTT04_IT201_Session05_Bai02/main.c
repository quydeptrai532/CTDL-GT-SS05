#include <stdio.h>
//hàm tính tổng từ 1-n
int sum(int num) {
    if (num==0) {
        return 0;
    }
    num=num+sum(num-1);
    return num;
}
int main() {
    int n;
    printf("moi ban nhap vao 1 so nguyen duong bat ky");
    scanf("%d",&n);
    if (n<0) {
        printf("so nhap vao khong hop le:\n");
        return;
    }
    printf("tong tu 1 den n la:\n");
    int result=sum(n);
    printf("%d",result);
    return 0;
}
