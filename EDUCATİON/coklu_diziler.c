#include <stdio.h>
#include <stdlib.h>

void notlari_oku(int N[][3][4],int sinif,int ogrenci,int ders) {
	int i,j,k;
	
	for(i=0;i<sinif;i++)
		for(j=0;j<ogrenci;j++)
			for(k=0;k<ders;k++) {
				printf("%d. Sinifin %d. ogrencinin %d. dersinin notunu gir: ",i+1,j+1,k+1);
				scanf("%d",&N[i][j][k]);
			}
	
}

/* ders ort hesapla */

	void ortalama(int N[][3][4],float ort[],int sinif,int ogrenci,int ders) {
		int i,j,k;
		
		for(k=0;k<ders;k++) {
			ort[k]=0.0;
			for(i=0;i<sinif;i++)
				for(j=0;j<ogrenci;j++)
					ort[k] += N[i][j][k];
				}
			for(i=0;i<ders;i++)
				ort[i]/=(sinif*ogrenci);	
				
	}
 
int main () {
	int SDN[2][3][4]; /* 2 sinif, her sinifta 3 ögrenci ve her ogrencinin 4 dersi */
					/* 3 boyutlu dizi bu.*/	
	float orta[4];
	int i;
	
	notlari_oku(SDN,2,3,4);
	
	ortalama(SDN,orta,2,3,4);
	
	printf("ders ortalamalari.\n");
	
	for(i=0;i<4;i++)
		printf("%d. ders ortalamsi: %.2f\n",i+1,orta[i]);
	
	return 0;
}
