#include<stdio.h>
int main(){
  int x,i,j;
  printf("Bir sayi giriniz=>");
  scanf("%d",&x);
  if(x%2!=0){
  for(i=0;i<x;i++){
  	for(j=0;j<x;j++){
  		if(i+j==x/2||j-i==x/2||i-j==x/2||i+j==(x/2)*3)
  		printf("*");
  		else
  		printf(" ");
	  }
	  printf("\n");
  }	
}
}
 
