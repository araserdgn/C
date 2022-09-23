#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* doghrusal arama */

int dogrusal_arama(int *A,int boy,int deger){
	int i;
	
	for(i=0;i<boy;i++){
		if(deger == A[i])
			return i;
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
	
	
	printf("Hangi elemaný ariyosun?: ");
	scanf("%d",&aranan);
	
	cevap = dogrusal_arama(B,boy,aranan);
	
	if(cevap==-1)
		printf("%d degerdeki elemani bulamadik.\n",aranan);
	else
			printf("%d degerdeki elemani %d. konumda bulduk.\n",aranan,cevap);		
	
	free(B);
		
	return 0;
}
