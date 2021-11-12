#include<stdio.h>
int main(){
int i,j,h,x;
 printf("Yuksekligi giriniz=>");
 scanf("%d",&h);
 printf("Genisligi giriniz=>");
 scanf("%d",&x);
 for(i=0;i<h;i++){
 	for(j=0;j<x;j++){
 		if(j==x/2||i+j==x/2||i-j==x/2||i==x/2)
 		printf("*");
 		else
 		printf(" ");
	 }
	 printf("\n");
 }
}

