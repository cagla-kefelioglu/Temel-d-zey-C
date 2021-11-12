#include<stdio.h>
int main(){
		char ad[40][20],soyad[40][40];
		int vize[40],final[40],i;
		float ort[40];
		FILE *dosya=fopen("liste.txt","w");
		fprintf(dosya,"Ad\t\tSoyad\tVize\tFinal\tOrtalama");
		for(i=0;i<40;i++){
			printf("adinizi giriniz= ");
			scanf("%s",ad[i]);
			printf("soyadnizi giriniz= ");
			scanf("%s",soyad[i]);
			printf("vize notunuzu giriniz= ");
			scanf("%d",&vize[i]);
			printf("final notunuzu giriniz= ");
			scanf("%d",&final[i]);
			ort[i]=vize[i]*0.4+final[i]*0.6;
			fprintf(dosya,"%s\t\t%s\t%d\t%d\t%.1f",ad[i],soyad[i],vize[i],final[i],ort[i]);
			fprintf(dosya,"\n");
		}
		fclose(dosya);
	}

