#include<stdio.h>
#include<string.h>
int main(){
char metin[100];
char harf;
int uzunluk=0,n=0;
printf("Lutfen bir metin giriniz==>");
gets(metin);
if(metin[0]>='a' &&metin[0]<='z')
metin[0]=metin[0]-32;
while(metin[n]!='\0'){
harf=metin[n];
if(harf==' '){
	n++;
	harf=metin[n];if(harf>='a' && harf<='z'){
		harf=harf-32;
		metin[n]=harf;
	}
}	
n++;
}
printf("\n Yeni metin:%s",metin);
}
