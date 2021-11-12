#include<stdio.h>
int main(){
float dizi[100],toplam;
int i,n;
printf("dizi kac elemanli olacak:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("%d. elemani giriniz:",i+1);
	scanf("%f",&dizi[i]);
	toplam+=dizi[i];
}	
printf("dizi elemanlarinin tolami=%f",toplam);
	
}

