#include<stdio.h>
#include<string.h>
int main(){
	char sesli[9]={"aeýioöuü"};
	char dizi[100];
	int i,s=0,j;
	printf("Cumleyi giriniz= ");
	gets(dizi);
	for(i=0;i<strlen(dizi);i++){
		for(j=0;j<9;j++){
		if(dizi[i]==sesli[j]){
		s++;
		printf("dizinin %d. elemani\n",i+1);
     	}
        }
        }
	printf("Dizide %d tane sesli harf vardýr.",s);
}
