#include <stdio.h>
#include <stdlib.h>

int degistir(int *A,int boy,int deger,int yeni_deger) {
	int i,sayac=0;
	
	for(i=0;i<boy;i++)
		if(A[i]==deger){
			A[i]=yeni_deger;
			sayac++;
		}
	return sayac;
}

int main() {
	
	int *D;
	int esayisi,i;
	int s;
	
	printf("Kaclık dizi istersn? ");
	scanf("%d",&esayisi);
	
	D = (int *)calloc(esayisi,sizeof(int));
	
	printf("ORiG\n");
	for(i=0;i<esayisi;i++)
		printf("%d ",D[i]);
	printf("\n");
	
	s = degistir(D,esayisi,0,25);
	
	printf("%d degisiklik oldu.\n",s);
	
	printf("Sonrkai\n");
	for(i=0;i<esayisi;i++)
		printf("%d ",D[i]);
	printf("\n");	
	
	return 0;
}
