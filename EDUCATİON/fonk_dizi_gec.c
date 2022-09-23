#include <stdio.h>

/* Fonksiyona dizi geçme */
/* int a[]==*a */

int eleman_deg(int a[],int eleman,int deger,int yeni){
	
	int i;
	int sayac=0;
	
	for(i=0;i<eleman;i++)
		if(a[i]==deger){
			a[i]=yeni;
			sayac++;
		}
		
		return sayac; 
		/* su kadar deg. yaptým diye SAYAC degeri gonuyo  */
}



int main(){
	int a[] = {25,50,75,25,60,25,90,120,25};
	int ed,yd;
	int ds,i;
	
	printf("ILK\n");
	
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n\n");
	
	printf("Eski deger gir: ");
	scanf("%d",&ed);
	printf("Yeni degisecek deger gir: ");
	scanf("%d",&yd);
	
	ds = eleman_deg(a,10,ed,yd);
	
	printf("SON\n");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n\n");
		printf("%d degisiklik yapildi.\n",ds);
		
	
	return 0;
}
