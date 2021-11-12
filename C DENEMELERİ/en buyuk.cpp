#include<stdio.h>
int main(){
int i,enbuyuk,n;
printf("Lutfen bir sayi giriniz=>");
scanf("%d",&enbuyuk);
for(i=0;i<19;i++){
	printf("Lutfen bir sayi giriniz=>");
	scanf("%d",&n);
	if(n>enbuyuk)
	enbuyuk=n;
}	
printf("en buyuk sayi =%d",enbuyuk);
	
	
	
	
	
	
	
	
	
	
}
