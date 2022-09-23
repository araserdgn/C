#include <stdio.h>
#define max 5

int main() {
	
	float p1[max+1],p2[max+1];
	float top[max+1]={0};
	float carp[2*max+1]={0};
	int n1,n2,nmax;
	int i,j;
	/* max+1 durumu sabit sayiyi da tutsun diye */
	
	printf("1. Poli derecesi: ");
	scanf("%d",&n1);
	if(n1>max) {
	
		printf("Hatali.\n");
		return -1;
	}
	
	printf("1. polinom katsayilari: ");
	for(i=n1;i >= 0;i--)
		scanf("%f",&p1[i]);
	
	
	printf("\n\n2. Poli derecesi: ");
	scanf("%d",&n2);
	if(n2>max) {
	
		printf("Hatali.\n");
		return -1;
	}
	
	printf("2. polinom katsayilari: ");
	for(i=n2;i >= 0;i--)
		scanf("%f",&p2[i]);
	
	 if(n1>nmax)
	 	nmax=n1;
	 else
	 	nmax=n2;
	/* TOPLAMA */
		for(i=0;i<=nmax;i++)
			top[i]=p1[i]+p2[i];
			
	/* carpma */
		for(i=0;i<=n1;i++)
			for(j=0;j<=n2;j++)	
				carp[i+j] += p1[i]*p2[j];
				
	/* Ciktilamalar */
		printf("\n\n Toplam: \n");
		for(i=nmax;i>=1;i--)
			printf("%.2fx^%d +",top[i],i);
		printf("%.2f\n\n",top[0]);
		
		printf("\n\n Carpim:\n");
		for(i=n1*n2; i>=1;i--)
		printf("%.2fx^%d +",carp[i],i);
		printf("%.2f\n\n",carp[0]);
		
		printf("\n\n");
			
	
	
	
	
				
	return 0;
}
