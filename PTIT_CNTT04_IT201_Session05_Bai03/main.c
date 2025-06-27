#include <stdio.h>
//hàm tính giai thừa của n
int giaithua(int num) {
    if (num==0) {
        return 1;
    }
    num=num*giaithua(num-1);
    return num;
}
int main() {
    int n;
    printf("moi ban nhap vao 1 so nguyen duong can tinh giai thua:\n");
    scanf("%d",&n);
    if (n<=0) {
        printf("so nguyen duong nhap vao khong hop le:\n");
        return 0;
    }
    int result=giaithua(n);
    printf("%d",result);
    return 0;
}
