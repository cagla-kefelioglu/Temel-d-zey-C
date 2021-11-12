#include <stdio.h>
int main(){
int i,j,toplam=0;
for(i=2;i<=100;i++){
	 for(j=1;j<i;j++){
		if(i%j==0){
			toplam=toplam+j;
		}
    } 
    	if(i==toplam){
    	printf(" %d ",i);
	    }
	
    }		
}

