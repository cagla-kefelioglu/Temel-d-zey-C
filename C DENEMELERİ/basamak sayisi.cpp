#include<stdio.h>
int main(){
	int sayi,bsmk=0;
	printf("Sayi giriniz=");
	scanf("%d",&sayi);
	while(sayi>0){
		sayi=(sayi-sayi%10)/10;
		bsmk++;
	}
	printf("basamak sayisi==%d",bsmk);
}
