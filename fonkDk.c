#include <stdio.h>

/* n*m DIKDORTGEN ÇIZ */
void yatayciz(int n) {
	int i;
	
	printf(" ");
	for(i=0;i<n;i++)
		printf("-");
		
	printf("\n");	
}

void dikciz(int n){
	int i;
	
	printf("|");
	for(i=0;i<n;i++)
		printf(" ");
		
	printf("|\n");	
}

void dkciz(int n,int m) {
	int i,j;
	
	yatayciz(m);
	
	for(i=0;i<n;i++){
		dikciz(m);
		/* dikeye M dememizin sebebi araya koyacagý
			bosluk sayisi. */
	}	
	
	yatayciz(m);	
	
}
		

int main() {
	int n;
	dkciz(3,5);
	
	printf("\n");
	
	
	n=5;
	dkciz(n,2);
	
	n=4;
	dkciz(n*2+4,4);
	printf("\n");
	dkciz(n*3-2,2*n+5);
	
	
	return 0;
}
