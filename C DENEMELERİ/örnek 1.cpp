#include<stdio.h>
int main(){
	int i,j,toplam=0,s;
	printf("Satir sayisi giriniz==");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			if(i>=j){
			toplam++;
			printf("%d",toplam);
		}
		}
		printf("\n");
	}
}
