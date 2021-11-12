#include<stdio.h>
#include<string.h>
int main(){
	char a[5]={",::-"};
	char b[100];
	int i,j,say;
	printf("cumleyi giriniz-->");
	gets(b);
	for(i=0;i<=strlen(b);i++){
		for(j=0;j<=4;j++){
			if(b[i]==a[i]){
				say++;
			}
		}
	}
	printf("\n");
	printf("cumledeki kelime sayisi=%d",say+1);
}
