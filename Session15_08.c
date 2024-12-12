#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "xin chao toi ten la hoang anh";
    int length = strlen(str);
    if (length>0&&str[0]!=' '){
        str[0]= toupper(str[0]);
    }
    int i;
    for ( i = 1; i < length; i++) {
        if (str[i]!=' '&&(str[i-1]==' '||str[i-1]=='\t'||str[i-1]=='\n'||ispunct(str[i-1]))){
            str[i]= toupper(str[i]);
        }
    }
    printf("Chuoi sau khi viet hoa cac chu cai dau cua moi tu: %s\n", str);
    return 0;
}

