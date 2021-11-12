#include<stdio.h>
int main(){
int matris[5][5],i,j;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(i+j<5)
		matris[i][j]=i+j+1;
		else
		matris[i][j]=i+j-4;
	}
}	
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		printf("%d ",matris[i][j]);
	}
	printf("\n");
}	
}
