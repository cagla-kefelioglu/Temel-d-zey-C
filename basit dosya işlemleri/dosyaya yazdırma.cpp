#include<stdio.h>
#include<string.h>
int main(){
	char dizi[25]="�a�la kefelio�lu";
	int i;
	FILE *dosya=fopen("yaz�l�m.txt","w");
	if(dosya==NULL)
	printf("Dosya ac�l�rken bir hata olustu!");
	else{
		for(i=0;i<strlen(dizi);i++){
			fputc(dizi[i],dosya);
		}
	}
	fclose(dosya);
}
