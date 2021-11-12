#include<stdio.h>
int main(){
	FILE *dosya=fopen("yazýlým.txt","w");
	if(dosya==NULL)
	printf("dosya oluþturulamadý!");
	else
	printf("dosya oluþturuldu");
	return 0;
	
}
