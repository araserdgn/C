#include <stdio.h>

long faktor(int n) {
	
	if(n==0 || n==1)
		return 1;
	else
		return n*faktor(n-1);	
}



int main () {
	
	int x;
	
	printf("deger gir: ");
	scanf("%d",&x);
	
	printf("%d! = %ld\n",x,faktor(x));
	
	return 0;
}
