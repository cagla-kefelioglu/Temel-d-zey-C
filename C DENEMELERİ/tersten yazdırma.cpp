 #include<stdio.h>
 #include<string.h>
 int main(){
 char dizi[100];
 int i,b;
 printf("Lutfen cumleyi giriniz=>");
 gets(dizi);
 b=strlen(dizi);
 for(i=0;i<=b;i++){
 printf("%c",dizi[b-i]);	
 }	
 }
