#include<stdio.h>
#include<string.h>
int main(){
char dizi[100];
char sesli[9]={"ae�io�u�"};
int i,j,b;
printf("Lutfen c�mleyi giriniz=");
gets(dizi);
b=strlen(dizi);
for(i=0;i<b;i++){
	if(dizi[i]!=*sesli)
    printf("%c",dizi[i]);	
}		
}
