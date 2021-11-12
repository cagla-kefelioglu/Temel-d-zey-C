#include<stdio.h>
int main(){
int i,j,matris[5][5];
 for(i=0;i<5;i++){
 	for(j=0;j<5;j++){
 		if(i==0||i==2||i==4||i+j==3||i+j==5||j==0||j==2||j==4)
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
