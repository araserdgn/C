#include <stdio.h>

int fak(int sayi){ 
	int fact=1;
	
	for(;sayi>0;sayi--){
		fact *=sayi;
	}
		return	fact;
}


int main() {
	
	int sayi;
	
	printf("Fakt. saayi gir: ");
	scanf("%d",&sayi);
	
	printf("Deger: %d",fak(sayi));

	
	return 0;
}
