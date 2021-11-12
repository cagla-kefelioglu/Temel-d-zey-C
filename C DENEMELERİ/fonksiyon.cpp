#include<stdio.h>
int toplamyap(int deger1,int deger2){
	return deger1+deger2;
}
int main(){
	int a,b;
	printf("toplanacak degerleri giriniz=>");
	scanf("%d %d",&a,&b);
	int toplam=toplamyap(a,b);
	printf("%d+%d=%d",a,b,toplam);
}
