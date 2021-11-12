#include<stdio.h>
int main(){
	char isimler[10][5];
	int i,j;
	for(i=0;i<10;i++){
		printf("isminizi giriniz==>");
		gets(isimler[i]);
			
	}
	FILE *dosya=fopen("sinif_listesi.txt","w");
	if(dosya==0)
	printf("dosya açýlamadý!!!");
	else{
		printf("dosya acildi:)");
		for(i=0;i<10;i++){
			fputs(isimler[i], dosya);		
		}
	}
	fclose(dosya);
	
}
