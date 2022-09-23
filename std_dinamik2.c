#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* standart sapma hesaplayacagiz ama bu sefer negatif girene kdr */

int main(){
	
	int n=0,i;
	float sayi,ort=0.0,karelertop=0.0,std;
	float *S=NULL;
	
	while(1) {
		printf("sayi gir: ");
		scanf("%f",&sayi);
		if(sayi>=0){
			n++;
		S = (float*)realloc(S,n*sizeof(float));
		S[n-1] = sayi;
		ort +=sayi;
		}
		else{
			ort/=n;
			break;
		}
			
	}
	
	for(i=0;i<n;i++) 
		karelertop +=(ort-S[i])*(ort-S[i]);
		
	if(n<2)	
		std=0.0;
	else
		std=sqrt(karelertop/(n-1));
		
	printf("STD = %.2f\n",std);		
	
	
	return 0;
}
