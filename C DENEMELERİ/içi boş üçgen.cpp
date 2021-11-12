 #include<stdio.h>
int main(){
	int i,j,n,m;
	printf("yuksekligi giriniz=>");
	scanf("%d",&n);
	printf("taban uzunlugunu giriniz=>");
	scanf("%d",&m);
	if( m>=n && n>(m/2) && m>0 && n>0){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i+j==m/2||i==m/2||j-i==m/2)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
}

