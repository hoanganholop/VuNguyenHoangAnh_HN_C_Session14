#include<stdio.h>
#include<string.h>

int main(){
	char word[100];
	printf("Nhap chuoi bat ky:");
	fgets(word, sizeof(word), stdin);
	fputs(word, stdout);
	printf("Do dai cua chuoi vua nhap: %d", strlen(word));
	return 0;
}
