#include<stdio.h>
#include<string.h>
int main(){
	char dizi[100];
	int i;
	printf("Cumle giriniz=");
	gets(dizi);
	for(i=0;i<strlen(dizi);i++){
	printf("%c",dizi[strlen(dizi)-1-i]);
	}	 
}

