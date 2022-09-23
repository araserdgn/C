#include <stdio.h>

/* n*n KARE ÇIZ */

void kareciz(int n) {
	int i,j;
	
	
	
	for(i=0;i<n;i++)
		printf("-");
		
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("|");
		for(j=0;j<n;j++)
			printf(" ");
			
		printf("| \n");	
	}	
	
		printf(" ");
		for(i=0;i<n;i++)
			printf("-");
			
		printf("\n");	
	
}
	
	

int main() {
	int n=3;
	kareciz(n);
	
	printf("\n");
	
	
	n=5;
	kareciz(n);
	
	
	return 0;
}
