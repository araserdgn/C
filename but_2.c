#include <stdio.h>
void ucsola(int dizi[],int boy) {
	int degistir,i,j;
	
	 for( i=0;i<3;i++) {
    	degistir=dizi[0];
   		for(j=0;j<boy-1;j++) {
			dizi[j]=dizi[j+1];
   		}
   		 dizi[boy-1]=degistir;
 	 }
}
int main() {	

	int A[] = {1,2,3,4,5,20,6,30,7,40,8,9};
	int boy = 12, i; 
	
	ucsola(A,boy);
	for (i=0; i<boy; i++)
		printf("%d\n", A[i]);
	return 0;
}



