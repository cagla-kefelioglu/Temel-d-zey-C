#include<stdio.h>
#include<conio.h>
int main(){
	int dizi[10]={1,3,5,7,9,11,13,15,17,19};
	int i,toplam=0;
	for(i=0;i<10;i++){
		printf("Dizinin %d. elemani=%d\n",i+1,dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("dizi elemanlarinin toplami=%d",toplam);
	getch();
	
}


