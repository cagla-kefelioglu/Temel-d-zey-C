#include<stdio.h>
int main(){
	int dizi[100];
	int i,n,x,s,enk;
	printf("Dizi kac elemanli olacak=");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		printf("Dizinin %d. elemanini giriniz= ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("Bir sayi giriniz= ");
	scanf("%d",&n);
	s=n-dizi[0];
	if(s<0)
	enk=s*(-1);
	else
	enk=s;
	for(i=1;i<x;i++){
		if(dizi[i]>n){
			s=dizi[i]-n;
			if(s<enk)
			enk=dizi[i];
		}
		else{
			s=n-dizi[i];
			if(s<enk)
			enk=dizi[i];
		}
	}
	printf("En yakin sayi=%d",enk);
}
