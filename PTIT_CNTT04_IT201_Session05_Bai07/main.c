#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n == 0) return 0;           // Trường hợp cơ bản 1
    else if (n == 1) return 1;      // Trường hợp cơ bản 2
    else return fibonacci(n - 1) + fibonacci(n - 2); // Gọi đệ quy
}

int main() {
    int n;
    printf("Nhap vi tri n trong day Fibonacci: ");
    scanf("%d", &n);

    printf("So Fibonacci tai vi tri %d la: %d\n", n, fibonacci(n));
    return 0;
}
