#include<stdio.h>

int main(){
	int dizi[200];
	int i,n;
	dizi[0]=1;
	dizi[1]=1;
	printf("kac eleman istiyorsunuz=>");
	scanf("%d",&n);
	for(i=2;i<n;i++){
	   dizi[i]=dizi[i-1]+dizi[i-2];
	}
	for(i=0;i<n;i++){
		printf("%d ",dizi[i]);
	}
}

