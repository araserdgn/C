#include <stdio.h>
int main() {
	
char dizi[21];

	printf("%p\n",dizi);
	printf("%p\n",&dizi);
	printf("%p\n",&dizi[0]);
	printf("%p\n",&dizi[2]);
	printf("%p\n",dizi+3);
	printf("%p\n",&dizi[20]);
	printf("\n");

return 0;
}
