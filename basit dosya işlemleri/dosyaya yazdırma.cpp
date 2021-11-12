#include<stdio.h>
#include<string.h>
int main(){
	char dizi[25]="çaðla kefelioðlu";
	int i;
	FILE *dosya=fopen("yazýlým.txt","w");
	if(dosya==NULL)
	printf("Dosya acýlýrken bir hata olustu!");
	else{
		for(i=0;i<strlen(dizi);i++){
			fputc(dizi[i],dosya);
		}
	}
	fclose(dosya);
}
