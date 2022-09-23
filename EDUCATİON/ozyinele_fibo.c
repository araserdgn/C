#include <stdio.h>

int fibonaci(int n) {
	
	if(n<0)
		return -1;
	else if(n==0 || n==1)
		return n;
	else
		return fibonaci(n-1)+fibonaci(n-2);		
}



int main () {
	
	int deger;
	
	printf("Deger gir: ");
	scanf("%d",&deger);
	
	printf("Fibonaci degeri: %d",fibonaci(deger));

	return 0;
}
