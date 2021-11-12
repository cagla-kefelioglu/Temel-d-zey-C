#include<stdio.h>
#include<string.h>
int main(){
char dizi[100];
char sesli[9]={"aeýioöuü"};
int i,j,b;
printf("Lutfen cümleyi giriniz=");
gets(dizi);
b=strlen(dizi);
for(i=0;i<b;i++){
	if(dizi[i]!=*sesli)
    printf("%c",dizi[i]);	
}		
}
