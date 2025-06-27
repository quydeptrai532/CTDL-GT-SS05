#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm đệ quy kiểm tra chuỗi đối xứng
int isPalindrome(char str[], int left, int right) {
    if (left >= right) return 1; // Trường hợp cơ bản: kiểm tra hết -> đối xứng
    if (str[left] != str[right]) return 0; // Không bằng nhau -> không đối xứng
    return isPalindrome(str, left + 1, right - 1); // Kiểm tra tiếp phần còn lại
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Xóa kí tự newline nếu có

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1)) {
        printf("Chuoi la chuoi doi xung.\n");
    } else {
        printf("Chuoi KHONG la chuoi doi xung.\n");
    }

    return 0;
}
