#include <stdio.h>
#include <stdlib.h>

float *carpma(float *V,int boy,float skaler){
	float *S;
	int i;
	
	S = (float*)malloc(boy*sizeof(float));
	for(i=0;i<boy;i++)
		S[i] = V[i]*skaler;
		
	return S;	
}

int main () {
	
	float V[] = {2.0,3.5,4.2,5.7,6.1};
	float sk = 0.75;
	float *sonuc;
	int i;
	
	sonuc = carpma(V,5,sk);
	
	printf("ORiG VEKTOR\n");
	for(i=0;i<5;i++)
		printf("%.2f ",V[i]);
	printf("\n");
	
	printf("SONUIC VEKTOR\n");
	for(i=0;i<5;i++)
		printf("%.2f ",sonuc[i]);
	printf("\n");	
	
	
	
	return 0;
}
