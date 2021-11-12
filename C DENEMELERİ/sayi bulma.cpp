#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int matris[4][4];
	int i,j,a,b=0;
	srand(time(NULL));
	for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	matris[i][j]=rand();	
	}	
	}
	printf("Bir sayi giriniz= ");
	scanf("%d",&a);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(matris[i][j]==a){
			printf("(%d,%d)",i,j);
			b=1;
		}
	}	
}
if(b==0)
printf("Sayi bulunamadi!!");
}

