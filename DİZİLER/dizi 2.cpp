 #include<stdio.h>
 
 int main(){
 	int dizi[5],dizitek[5],dizicift[5],i,s=0,a=0,n;
 	for(i=0;i<5;i++){
 		printf("dizinin %d. elemanini giriniz---->",i+1);
 		scanf("%d",&dizi[i]);
 		if(dizi[i]%2==0){
        dizicift[s]=dizi[i];   
        s+=1;
    }
        else{
        dizitek[a]=dizi[i]; 
        a+=1;
    }
    }
	    printf("CIFT SAYILAR:");
	    for(i=0;i<s;i++){
	    printf("%d ",dizicift[i]);
	}
	    printf("\nTEK SAYILAR:");
	    for(i=0;i<a;i++){
	    printf("%d ",dizitek[i]);
	}
 }
 
