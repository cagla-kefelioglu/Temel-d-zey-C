#include<stdio.h>
int main(){
int sayilar[10]={25,22,17,19,47,3,93,5,124,10},n,i;
printf("bir sayi giriniz=>");
scanf("%d",&n);
for(i=0;i<10;i++){
	if(sayilar[i]%n==0)
	printf("\n%d",sayilar[i]);
}		
}

