/*
#include <stdio.h>
void kdegistir(int a, int b) {
	int gecici = a;
	a = b;
	b = gecici;
}

int main() {
	
	int m = 3, n = 4;
	kdegistir(m,n);
	printf("%d %d\n", m, n);

return 0;
}
*/

/* yukardaki gibi deðiþmez, iste burda POINTERS devreye girer. Adresleri degistirirsek
	bu sefer degiseceklerdir. */
	

#include <stdio.h>
void kdegistir(int *a, int *b) {
	int gecici = *a;
	*a = *b;
	*b = gecici;
}

int main() {
	
	int m = 3, n = 4;
	kdegistir(&m,&n);
	printf("%d %d\n", m, n);

return 0;
}	
