  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* rastgele poz veya neg say�lar� sirala buyuk-kucuk veya kucuk-buyuk */
void kdegistir (int *a, int *b){
	int gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
}

void dizi_sira(int *D,int boy,int kb){
	int i,j;
	for(i=0;i<boy-1;i++) /*sondaki rakami kars. bir say� olmad�g� i�in boy-1 */
		for(j=i+1;j<boy;j++)	/* i+1 sebebi bir yanindakinden itibaren k�yasla */
			if(kb){
			if(D[i]<D[j])
				kdegistir(&D[i],&D[j]);
			}
			else
				if(D[i]>D[j])
				kdegistir(&D[i],&D[j]);
}

int main () {
	
	int *A;
	int boy;
	int i,pn,j; /* 0 veya 1, 0 ise poz 1 ise neg */
	int sayi; /* 0 ile 999 aras� sayi */
	int tercih;
	
	printf("Kac eleman istiyorsun? ");
	scanf("%d",&boy);
	printf("Kucukten buyuge mi(0)? Buyukten kucuge mi? (1)");
	scanf("%d",&tercih);
	
	/* random donecek her gun saatinde degisck */
	
	srand(time(NULL));
	
	/* dizinin i�ini genislettik */
	
	A=(int *)malloc(boy*sizeof(int)); 
	
	 for(i=0;i<boy;i++){
	 	pn = rand() % 2;
	 	sayi = rand() % 1000;
	 	if(pn)
	 		sayi *=-1;
	 	A[i] = sayi;	
	 }
	
	printf("ORIGINAL\n");
	for(i=0;i<boy;i++)
		printf("%d ",A[i]);
	printf("\n");
	
	/* asil siralama */
	
		dizi_sira(A,boy,tercih);
				
	/* asil siralama */
		printf("asil dizi\n");
	for(i=0;i<boy;i++)
		printf("%d ",A[i]);
	printf("\n");			
			
	/* bellegi bosaltt�k */		
	free(A);
	
	return 0;
}
