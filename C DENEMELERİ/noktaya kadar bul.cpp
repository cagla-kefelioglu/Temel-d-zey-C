#include<stdio.h>
#include<string.h>
int main(){
char dizi[100];
int i,s=0;
printf("Cumleyi giriniz= ");
gets(dizi);
for(i=0;i<strlen(dizi);i++){
	if(dizi[i]!=' ' && dizi[i]!='.')
	s++;
	if(dizi[i]=='.')
	break ;
}	
printf("Karakter sayisi=%d",s);
}

