#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int tarla[10][10];
	int satir,sutun,i,j,puan=0;
	srand(time(NULL));
	for(i=0;i<10;i++){
		satir=rand()%10;
		sutun=rand()%10;
		if(tarla[satir][sutun]!=1)
		tarla[satir][sutun]=1;
		else
		i--;
	}
	do{
		printf("Satir numarasi giriniz=");
		scanf("%d",&satir);
		printf("Sutun numarasi giriniz=");
		scanf("%d",&sutun);
		if(tarla[satir][sutun]!=1){
			puan++;
			printf("Dogru hamle :)\n");
		}
	}
		while(tarla[satir][sutun]!=1);
		printf("MAYÝNA BASTÝNÝZ!!!!\nPuanýnýz:%d",puan);
} 

