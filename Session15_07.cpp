#include <stdio.h>
#include <ctype.h>

int main() {
    char str[]="Hoang Anh 07 02 2005 *^%";
    int letters=0;
    int digits=0;
    int specialCharacters=0;
    for (int i=0;str[i]!='\0';i++){
        if (isalpha(str[i])){
            letters++;
        }else if (isdigit(str[i])){
            digits++;
        }else{
            specialCharacters++;
        }
    }
    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specialCharacters);

    return 0;
}

