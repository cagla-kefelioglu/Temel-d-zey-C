#include<stdio.h>
#include<conio.h>
#include<math.h> 
int main(){
int x,h,V,Vx,Vy,g=9.81,t,t2,a,b;
printf("Max menzili ve yuksekligi bulmak icin yatayla yapilan aciyi 45 derece giriniz! ");
printf("Yapacaginiz islemi seciniz:\n[1] Harekette gecen toplam sureyi bulmak icin\n[2] Yataydaki ve duseydeki hizi bulmak icin\n[3] hareketlinin maximum yuksekigi ve menzili icin");
printf("\nLutfen secim yapiniz:");
scanf("%d",&b);
switch(b){  
	case 1:
	print("Yatayda alinan yolu,ilk hizi ve yatay ile yapilan açiyi giriniz:"f);
	scanf("%d %d %d",&x,&V,&a);
	t=x/(V*cos(a));
	printf("toplam sure =%d ",t);
	break;
	case 2:
	printf("Ýlk hizi ve yatay ile yapilan aciyi giriniz:");
	scanf("%d %d",&V,&a);
	Vx=V*cos(a);
	Vy=V*sin(a);
	printf("yataydaki hiz =%d,duseydeki hiz=%d",Vx,Vy);
	break;
	case 3:
	printf("Toplam sureyi,yatay ile yapilan aciyi ve ilk hizi yaziniz:");
	scanf("%d %d %d",&t,&a,&V);
	h=V*sin(a)*t/2-g*(t/2)*(t/2)/2;
	x=V*cos(a)*t;
	printf("Maximum yukseklik=%d,menzil=%d",h,x);
	break;
	default:printf("Yanlis secim yaptiniz!");
	
}
	getch();
}
