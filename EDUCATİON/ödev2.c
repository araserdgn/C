#include <stdio.h>
void ters(int dizi[],int uzun) {

		int i,degis[12],j=0;
		
	for (i=uzun-1; i>=0; i--){
			degis[j]=dizi[i];
			j++;
		}
	for(i=0;i<=uzun;i++)
		dizi[i]=degis[i];	

}

int main() {
	int A[] = {1,2,3,4,5,20,6,30,7,40,8,9};
	int boy = 12, i; 
	ters(A,boy);
	for (i=0; i<boy; i++)
		printf("%d\n", A[i]);
return 0;
}

