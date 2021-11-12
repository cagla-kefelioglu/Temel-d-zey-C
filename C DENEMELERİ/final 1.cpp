#include<stdio.h>
#include<conio.h>
int main(){
float y,carpim=1;
int x=1;
printf("bir y degeri giriniz=>");
scanf("%f",&y);
for(x=1;x<=10;x++){
	if(y*y!=2*x)
	carpim=carpim*((x*x*x*+3*y)/(y*y-2*x));
}
printf("%f  ",carpim);
getch();
}
