#include <stdio.h>
#include <stdlib.h>


struct polinom { /* herbir polinin DERECESI ve KATSAYILARI var */
	int derece;
	float *katsayi;
};

typedef struct polinom poli; /* artýk polinoma POLI diyecegiz */


/* polinom için yer ayýr */

poli yer_ayir(int d) { /* polinom derecesi */
	poli gecici;
	
	gecici.derece = d;
	gecici.katsayi = (float *)malloc((d+1)*sizeof(float)); /* d+1 sebebi sabit terimi unutmamak */
	
	return gecici;
}

/* katsayilari okuma */

void katsayilari_oku(poli *p) { /* polinin isaretcisi oldu p */
	
	int i;
	
	for(i=p->derece;i>=0;i--) {/* en yuksek dereceden baslattýk */
							/* p-> demek P nin isaret ettigi derece demek */
		printf("%d. terimin katsayisini gir: ",i);
		scanf("%f",&p->katsayi[i]); /* p nin isaret ettigi polinomun
										 katsayinin i. sine ekle */
			}
}

/* katsayilari ciktila */

void katsayilari_ciktila(poli PP) {
	int i;
	
	printf("katsayilar söyledir: \n");
	for(i=PP.derece;i>=0;i--)
		printf("%.2f\t",PP.katsayi[i]);
		
	printf("\n");	
}

/* toplama islemi */

poli toplama (poli X, poli Y) {
	int derece_max,i;
	
	poli S; /* toplam polinom */
	
	
	
	if(X.derece > Y.derece)
		derece_max = X.derece;
	else 
		derece_max = Y.derece;	
		
	S.derece = derece_max;
	
	S.katsayi = (float *)calloc((derece_max+1),sizeof(float)); /* +1 sebebi sabitin de katsayisi var. */	
						 /*  CALLOC ayrilan bosluklari "0" ile dodlurur	*/
	
	for(i=0;i<=X.derece;i++)
		S.katsayi[i]+=X.katsayi[i];
		
		
	for(i=0;i<=Y.derece;i++)
		S.katsayi[i]+=Y.katsayi[i];	
		
		
		return S;
}

int main () {

poli P1,P2,P3;

P1 = yer_ayir(4);
katsayilari_oku(&P1);

P2 = yer_ayir(5);
katsayilari_oku(&P2);

P3 = toplama(P1,P2);
 
 printf("P1 katsayilar:\n");
 katsayilari_ciktila(P1);
 
 printf("P2 katsayilar:\n");
 katsayilari_ciktila(P2);
 
 printf("Toplam polinomun katsayilari:\n");
 katsayilari_ciktila(P3);
return 0;
}


