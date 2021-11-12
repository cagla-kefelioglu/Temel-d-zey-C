#include<stdio.h>
#include<string.h>
int main(){
	char dizi[100];
	int s=0,i,b;
	printf("Lutfen cumleyi giriniz-->");
    gets(dizi);
    b=strlen(dizi);
	for(i=0;i<b;i++){
		if(dizi[i]==' ')
		s++;
	}
	printf("kelime sayisi=%d",s+1);
}

