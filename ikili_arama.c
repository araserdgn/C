#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* kucuk buyuk sirala */
void kdegistir(int *a,int *b){
	int gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
}

void dizi_sirala(int *A,int boy){
	int i,j;
	
	for(i=0;i<boy-1;i++)
		for(j=i+1;j<boy;j++)
			if(A[i]>A[j])
				kdegistir(&A[i],&A[j]);
}



/* ikili arama */

int ikili_arama(int *A,int sol,int sag,int deger){
	int i;
	int orta;
	
	int left = sol;
	int right =sag;

	while(sol<=sag){
		orta =(left+right)/2;
		if(A[orta]==deger)
			return orta;
		else if(deger<A[orta])
			right = orta-1;	
		else
			left = orta-1;
	}
	return -1;
}

int main() {
	
	int *B,artieksi;
	int boy,i,aranan,cevap;
	
	printf("Kac eleman olsun?");
	scanf("%d",&boy);
	
	B = (int *)malloc(boy*sizeof(int));
	if(B==NULL){
	
		printf("yer ayiramadi.");
		return -1;
	}
	srand(time(NULL));
	
	for(i=0;i<boy;i++){
		artieksi=rand() %2;
		if(artieksi)
			B[i] = -1;
		else
			B[i]=1;
		B[i] *= rand() % 1000; /* 0 ile 9999 arasi sayi verir */		


	}
	printf("DIZI BUDUR.\n");
	for(i=0;i<boy;i++)
		printf("%d ",B[i]);
	printf("\n");
	
	dizi_sirala(B,boy);
	
	printf("SIRALI BUDUR.\n");
	for(i=0;i<boy;i++)
		printf("%d ",B[i]);
	printf("\n");
	
	
	printf("Hangi elemani ariyosun?: ");
	scanf("%d",&aranan);
	
	cevap = ikili_arama(B,0,boy-1,aranan);
	
	if(cevap==-1)
		printf("%d degerdeki elemani bulamadik.\n",aranan);
	else
			printf("%d degerdeki elemani %d. konumda bulduk.\n",aranan,cevap);		
	
	free(B);
		
	return 0;
}
