#include<stdio.h>
#include<string.h>

int main(){
	char word[]="ebefhehbdvherygekausgdkvhxzbdvkqwgeh";
	int count=0;
	char character;
	printf("Nhap ky tu:");
	scanf("%c", &character);
	for(int i=0;i<strlen(word);i++){
		if(word[i]==character){
			count++;
		}
	}
	printf("So lan xuat hien: %d",count);
	return 0;
}
