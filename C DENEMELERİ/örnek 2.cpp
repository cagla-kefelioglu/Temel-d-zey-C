#include<stdio.h>
int main(){
int A[]={15,32,7,42,34,35,45,23};
int i,b,s=0;
for(i=0;i<8;i++){
	if(A[i]%2!=0 && s!=1){
		printf("Ilk tek sayi=%d",A[i]);
	    s++;
	}
	if(A[i]%2==0)
	b=A[i];
}
printf("\nSon cift sayi=%d",b);
}
