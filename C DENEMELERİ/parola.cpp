
#include<stdio.h>
int parola=1234,i,a;
int main(){
for(i=1;i<=3;i++){
printf("\nparolayi giriniz :");
scanf("%d",&a);
if(a>=1000 && a<=9999) {
if(a==parola) {
 printf("Hoþgeldiniz");

  return 0;}
else {printf("yanlis parola girdiniz.Tekrar deneyiniz"); 
}
}
else{
printf("sayi aralik disinda");

i--;
}
printf("sifre 3 kere hatali girildi. Program kapatiliyor");
 }
}
