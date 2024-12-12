#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count=0;
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char* token=strtok(str, " ");
    while (token!=NULL) {
        count++;
        token=strtok(NULL, " ");
    }
    printf("So tu trong chuoi la: %d\n", count);
    return 0;
}

