#include<stdio.h>
int main(){
	char ad[5][20],soyad[5][20];
	int i,vize[5],final[5];
	float ort[5];
	FILE *dosya=fopen("LISTE.txt","w");
	fprintf(dosya,"Ad\t\tSoyad\tVize\tFinal\tOrtalama");
	for(i=0;i<5;i++){
		printf("%d. ogrencinin adi==",i+1);
		scanf("%s",&ad[i]);
		printf("%d. ogrencinin soyadi==",i+1);
		scanf("%s",&soyad[i]);
		printf("vize notu==");
		scanf("%d",&vize[i]);
		printf("final notu==");
		scanf("%d",&final[i]);
		ort[i]=vize[i]*0.4+final[i]*0.6;
	fprintf(dosya,"\n%s\t\t%s\t%d\t%d\t%.1f",ad[i],soyad[i],vize[i],final[i],ort[i]);
}
    fclose(dosya);
}

