#include<stdio.h>
int main(){
int h,x,i,j;	
printf("Yuksekligi giriniz giriniz=>");
scanf("%d",&h);
printf("Genisligi giriniz=>");
scanf("%d",&x);
for(i=0;i<h;i++){
	for(j=0;j<x;j++){
		if(i==0||j==0||i==(h-1)||j==(x-1))
		printf("*");
		else
		printf(" ");
	}
	printf("\n");
}	
}
