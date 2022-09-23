/*enque() diziye eleman ekler sona
enque(10)
enque(20)
enque(30) 
--------->>>>>>> sira >>> 10 - 20 - 30
deque() strack ilk elemandan ciakrtir
<<<<<<<<<<<<<<<<<<<<<<<<< 20-30
deque()
<<<<<<<<<<<<<<<<<<<<<<<<< 30  */

#include <stdio.h>
#include <stdlib.h>

int *dizi=NULL;
int sira=0,sirabasi=0,boyut=2;

int deque () {
	int i;
	if(sira==sirabasi) {
		printf("Sira bos");
		return -1;
	}
	if((sira-sirabasi)<boyut/4) {
		int *dizi2=(int*)malloc(sizeof(int)*boyut/2); /* dizi kuculttk */
		for (i=0;i<sira-sirabasi;i++) {
			dizi2[i]=dizi[sirabasi+i]; /* sira 5 i sira 0 a koyar yeni dizide */
		}
		sira -=sirabasi;
		free(dizi);
		dizi=dizi2;
	}
	return dizi[sirabasi++]; /* _ _ 10 20 _ 20 yi gösterdi 10 gitti tarzý */
}
void temizle() {
	int i;
	if(sirabasi==0)
			return ;
	for(i=0;i<boyut;i++){
		dizi[i]=dizi[i+sirabasi]; /* _ _ _ _ 5 , 5 i basa almak içn */
		
	}	
	sira -=sirabasi; /* bas kadar kaysin ki son kutu belli olsn */
	sirabasi=0;	
}
int enque (int a) {
	int i=0;
	if(dizi==NULL) {
		dizi = (int*)malloc(sizeof(int)*2); /* yeni diz. olstrdk, her eklemede 2 kutuluk gensled */
	}
	if (sira >=boyut) { /* dizi doldu durumu */
		boyut*=2;
		int *dizi2=(int*)malloc(sizeof(int)*boyut);
		for(i=0;i<boyut/2;i++) /* eski DÝZÝdekileri yeni diziye çektk */
				dizi2[i] = dizi[i];
		free(dizi);
		dizi=dizi2;	
  }
  	dizi[sira++]=a; //en sag ekler yani	
}

int main () {
	int i;
	for (i=0;i<20;i++) {
		enque(i*10);
	}
	
	for(i=0;i<13;i++) {
		printf("%d ",deque());
	}
	printf("\n");
	temizle();
	printf("boyut= %d\n sira= %d\n sirabasi=%d\n",boyut,sira,sirabasi);
	for (i=0;i<20;i++) {
		enque(i*10);
	}
		for(i=0;i<13;i++) {
		printf("%d ",deque());
	}
	printf("boyut= %d\n sira= %d\n sirabasi=%d\n",boyut,sira,sirabasi);
	
	return 0;
}
