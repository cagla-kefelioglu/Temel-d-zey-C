#include<stdio.h>
int main(){
	FILE *dosya=fopen("yaz�l�m.txt","w");
	if(dosya==NULL)
	printf("dosya olu�turulamad�!");
	else
	printf("dosya olu�turuldu");
	return 0;
	
}
