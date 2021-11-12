#include<stdio.h>
int main(){
 	int i,j,a;
 	int dizi[10]={25,22,17,19,47,3,98,5,124,10},temp,minindex;
	for(i=0;i<10;i++){
		minindex=i;
		for(j=i;j<10;j++){
			if(dizi[j]<dizi[minindex])
			minindex=j;
		}
		temp=dizi[i];
     	dizi[i]=dizi[minindex];
	     dizi[minindex]=temp;
	 }
 	printf("bir sayi giriniz=>");
 	scanf("%d",&a);
 	printf("%d",dizi[a-1]);
}

