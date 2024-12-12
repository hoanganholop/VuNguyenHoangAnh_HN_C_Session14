#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Vu Nguyen Hoang Anh B24DTCN189";
    char xoaKyTu[10000];
    char character;
    int j = 0;
    printf("Chuoi: %s\n", str);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &character);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != character) {
            xoaKyTu[j++] = str[i];
        }
    }
    xoaKyTu[j] = '\0'; 
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", character, xoaKyTu);

    return 0;
}

