#include<stdio.h>
#include<string.h>
int main(){
char dizi[100];
char sesli[9]={"aeýioöuü"};
int i,j,s,yer[100];
printf("Lutfen cumleyi giriniz=");
gets(dizi);
s=0;
for(i=0;i<strlen(dizi);i++){
	for(j=0;j<8;j++){
		if(dizi[i]==sesli[j]){
			s++;
			yer[s]=i+1;
		}
	}
}	
printf("\n");
printf("Cumlede %d tane sesli harf vardir\n",s);
for(i=1;i<=s;i++){
	printf("%d-",yer[i]);
}	
}
