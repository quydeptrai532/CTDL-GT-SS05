#include<stdio.h>
//hàm in ra các số từ 1-n
void print1ToN(int num) {
    if (num==0) {
        return;
    }
    print1ToN(num-1);
    printf("%d ",num);
}
int main() {
    int n;
    printf("moi ban nhap vao 1 so nguyen duong bat ky:\n");
    scanf("%d",&n);
    printf("cac so tu 1 den %d la: \n",n);
    print1ToN(n);
}