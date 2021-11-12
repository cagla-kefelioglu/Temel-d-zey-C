#include<stdio.h>
int main(){
int matris[5][5],i,j;
for(i=0;i<5;i++){
	for(j=0;j<5;j++){
		if(j==0||j==2||j==4)
		matris[i][j]=1;
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

