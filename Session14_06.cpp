#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hoang Anh 07 02 2005 *^%";
    int letters = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", letters);

    return 0;
}

