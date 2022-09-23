#include <stdio.h>
/* fonksiyon */

void hatayi_bas(int hata) {
	
	printf("Hata kodu %d",hata);
	
}

int main() {
	int sayi;
	printf("Negatif girme: ");
	scanf("%d",&sayi);
	
	if(sayi<0){
	
	hatayi_bas(404);
	}
	else {
		printf("Tebriks.");
	}
	return 0;
}
