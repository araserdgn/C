#include <stdio.h>
void satir_gir(int N[][4],int satir,int sutun) {
		int i,j,a;
		
			for(i=0;i<satir;i++) {
				printf("%d. satiri gir: ",i+1);
			for(j=0;j<sutun;j++){
				scanf("%d",&a);
				N[i][j]=a;
					}		
				}
		}
		
int top(int N[][4]) {
		int i,j;
		int toplam=0;
		
		for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i!=1 && i!=2){
				toplam+=N[i][j];	}
				else {
				if(j!=1 && j!=2)
				toplam+=N[i][j];
					}
				}
			}		

return toplam;
}

int main() {
		int N[4][4];
		int toplm=0;
		
		satir_gir(N,4,4);
		toplm = top(N);
		printf("Cevre toplami: %d", toplm);

return 0;
}
