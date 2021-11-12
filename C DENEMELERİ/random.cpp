#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a,i,toplam=0,ort=0;
	for(i=0;i<6;i++){
		srand(time(NULL));
		a=rand();
		printf("%d\n",a);
        toplam+=a;
	}
	ort=toplam/6;
	printf("ortalama=%d",ort);
}
