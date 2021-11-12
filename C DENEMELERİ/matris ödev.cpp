#include<stdio.h>

int main(){
	int dizi[5][5],i,j,toplam=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(i+j>3){
		toplam+=1;
	    dizi[i][j]=toplam;
	}
    	else
		dizi[i][j]=0;
		}
		
    	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %d ",dizi[i][j]);
		}
		printf("\n");
	}
}

