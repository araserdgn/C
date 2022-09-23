#include <stdio.h>
#include <stdlib.h>

/* HER DAIREDEKI INSAN SAYISINI OKUMAK */
	
void insan_oku(int BD[][2],int binalar,int daireler) { /* dizi elemanlarýný belirttik */
	int i,j;
	
	for(i=0;i<binalar;i++)
		for(j=0;j<daireler;j++){
			printf("%d. binanin %d. dairesindeki insan sayisini gir: ",i+1,j+1);
             scanf("%d",&BD[i][j]);			
		}
	
}

/* HER BINADAKI TOPLAM INSAN */

void toplam_insan(int BD[][2],int B[], int binalar,int daireler){
	int i,j;
	
	for(i=0;i<binalar;i++){
		B[i]=0;
		for(j=0;j<daireler;j++)
		B[i]+=BD[i][j];
	}

}


int main () {
	
	int A[3][2];
	int T[3];
	int i,j;
	
	insan_oku(A,3,2);
	
	toplam_insan(A,T,3,2);
	
	printf("Her binanin Her dairesindeki insan sayisi:\n\n");
	for(i=0;i<3;i++){
		printf("%d. binadaki insan sayilari:\n",i+1);
		for(j=0;j<2;j++)
			printf("%d.daire: %d\n",j+1,A[i][j]);
	}
	
	printf("\nHer binadaki toplam insan:\n\n");
	for(i=0;i<3;i++)
		printf("%d.binada %d insa nvar.\n",i+1,T[i]);
	return 0;
}
