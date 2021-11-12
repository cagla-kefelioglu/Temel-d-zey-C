#include<stdio.h>
int main(){
 int  i=2,j,s=0,b=0;
 while(s<30){
 	i++;
 	for(j=2;j<i;j++){
 		if(i%j==0)
 		b=1;
	 }
	 if(b!=1){
	 printf("%d\n",i);
	 s++;
     }
    }	
}

