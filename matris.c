#include <stdio.h>
#include <stdlib.h>

/* MATRIS toplama SILEMLERI */


void toplam(int A[][4],int B[][4],int TOP[][4],int satir,int sutun){

	int i,j;
	
	for(i=0;i<satir;i++)
		for(j=0;j<sutun;j++)
			TOP[i][j] = A[i][j]+B[i][j];
			
	}
			
/* toplam MATRIS TRANSPOZU BULMA (satir sutun degismesidir.)*/
	
void capraz(int A[][4],int CAP[][2],int satir,int sutun){
	int i,j;
	
	for(i=0;i<satir;i++)
		for(j=0;j<sutun;j++)
		CAP[j][i] = A[i][j];
	
}				


int main () {
	int X[2][4]={{1,2,3,4},{4,8,12,16}};
	int Y[2][4]={{10,20,30,40},{40,80,120,160}};
	
	int TT[2][4]; /* toplam matris */
	int CC[4][2]; /* transpoz */
	int i,j;
		
		printf("X matrisi: \n");
		for(i=0;i<2;i++){
			
			for(j=0;j<4;j++)
			printf("%d,",X[i][j]);
		printf("\n");	
	}
	
			printf("Y matrisi: \n");
		for(i=0;i<2;i++){
			
			for(j=0;j<4;j++)
			printf("%d,",Y[i][j]);
		printf("\n");	
	}
	
	toplam(X,Y,TT,2,4);
	
	capraz(TT,CC,2,4);
	
	printf("Toplam sonuc:\n");
	for(i=0;i<2;i++){
		for(j=0;j<4;j++)
			printf("%d\t",TT[i][j]);
		printf("\n");	
	}
	
	printf("Caprazlama sonuc:\n");
	for(i=0;i<4;i++){
		for(j=0;j<2;j++)
			printf("%d\t",CC[i][j]);
		printf("\n");	
	}
	
	
	return 0;
}
