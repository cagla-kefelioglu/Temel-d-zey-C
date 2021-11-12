#include<stdio.h>
#include<string.h>
int main(){
	int s=0,i,b=0;
	char dizi[100];
	char harf[2];
	printf("lutfen cumleyi giriniz=>");
	gets(dizi);
	printf("lutfen aradiginiz harfi giriniz=>");
	gets(harf);
	for(i=0;i<strlen(dizi);i++){
	b++;
	if(dizi[i]==*harf){
	s++;
	printf("dizinin %d. elemanidir\n",b);
    }
}
if(s==0)
printf("aradiginiz eleman cumlede bulunmamaktadýr!");
printf("dizide %d kere vardir",s);
}

