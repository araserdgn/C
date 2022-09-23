#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* standart sapma hesaplayacagiz */

int main(){
	
	int n,i;
	float *S,ort=0.0,karelertop=0.0,std;
	
	printf("Kac sayi gireceksin: ");
	scanf("%d",&n);
	
	if(n<1){
		printf("Sayilarin degeri %d olamaz.",n);
		return -1;
	}
	
	S = (float*)malloc(n*sizeof(float));
	/* dizinin kapasitesini genislettik */
	
	if(S==NULL){
		printf("Yer ayirma  hatasi.\n");
		return -1;
	}
	
	for(i=0;i<n;i++){
		printf("%d. sayiyi gir: ",i+1);
		scanf("%f",&S[i]);
		ort+=S[i];
	}
	
	ort/=n;
	
	for(i=0;i<n;i++)
		karelertop +=(ort-S[i])*(ort-S[i]);
		
	if(n==1)
		std=0.0;
	else
		std= sqrt(karelertop / (n-1));	
		
	printf("Sapmasi %.3f",std);	
		
	
	
	return 0;
}
