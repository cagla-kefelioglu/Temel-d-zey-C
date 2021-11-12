#include<stdio.h>
int main(){
	int  i,j,matris[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		if(j<=i)
		matris[i][j]=j+1;
		else
		matris[i][j]=0;
		
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
} 
