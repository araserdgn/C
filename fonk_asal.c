#include <stdio.h>

int asal(int sayi) {
	
	int i;
	
	for(i=2;i<sayi;i++){
		
		if(sayi % i == 0){
			return 0; /* dongu biter */
		}
	}
	return 1;
}

int main() {
	int n; 
	
	printf("Bir sayi gir: ");
	scanf("%d",&n);
	
	if(asal(n) == 0){
		printf("sayi asal degil.");
	}
	else{
		printf("SAYi AsaL");
	}
}
