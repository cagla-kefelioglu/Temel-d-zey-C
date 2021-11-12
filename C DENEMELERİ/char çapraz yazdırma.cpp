#include<stdio.h>
#include<string.h>
int main(){
 char dizi[5];
 int i,j,b;
 printf("Lutfen kelimeyi giriniz--->");
 gets(dizi);
 b=strlen(dizi);
 for(i=0;i<b;i++){
    for(j=0;j<i;j++){
    printf(" ");
	}
	printf("%c ",dizi[i]);
	printf("\n");
 }		
}
