#include<stdio.h>
int main(){
	FILE *dosya=fopen("yazılım.txt","w");
	if(dosya==NULL)
	printf("dosya oluşturulamadı!");
	else
	printf("dosya oluşturuldu");
	return 0;
	
}
