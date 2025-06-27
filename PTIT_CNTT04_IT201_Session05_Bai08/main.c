#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm đệ quy chuyển chuỗi số thành số nguyên
int stringToInt(char str[], int n) {
    if (n == 0) return 0;  // Trường hợp cơ bản: hết chuỗi
    return stringToInt(str, n - 1) * 10 + (str[n - 1] - '0');
}

int main() {
    char str[100];

    printf("Nhap chuoi ky tu so: ");
    scanf("%s", str); // Đọc chuỗi không có khoảng trắng

    // Kiểm tra chuỗi chỉ chứa chữ số
    int isValid = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            isValid = 0;
            break;
        }
    }

    if (!isValid) {
        printf("Chuoi khong hop le. Chi duoc chua cac chu so.\n");
    } else {
        int result = stringToInt(str, strlen(str));
        printf("Gia tri so nguyen: %d\n", result);
    }

    return 0;
}
