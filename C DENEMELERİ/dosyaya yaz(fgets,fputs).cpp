#include<stdio.h>
int main(){
char dizi[100];
FILE *dosya=fopen("yaz.txt","a");
if(dosya==NULL)
printf("Dosya oluþturulamadý!!!");
else{
	printf("Metin giriniz= ");
	fgets(dizi,100,stdin);
	fputs(dizi,dosya);
	printf("Dosyaya yazildi:)");
	fclose(dosya);
}
}
