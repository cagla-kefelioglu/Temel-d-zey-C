#include<stdio.h>
int main(){
	int matris[10][10],i,j,x;
	FILE *dosya=fopen("finalsoru2.txt","w");
		printf("lutfen bir x degeri giriniz= ");
		scanf("%d",&x);
		if(x<=10){
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
			    if(j>=i){
			    matris[i][j]= 1+j-i;
			    fprintf(dosya,"%d",matris[i][j]);
			}
			   else{
			   fprintf(dosya," ");
			   }
	}
	fprintf(dosya,"\n");
	}
	printf("dosyaya yazildi :)");
	fclose(dosya);
 }
}
