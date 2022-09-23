#include <stdio.h>
int main() {
char secim;
float a;
do {
printf("Kenar uzunlugunu girin: ");
scanf("%f",&a);

printf("Alan: %.2f\n",a*a);
printf("Sonlandirmak icin q/Q girin...\n");
printf("Surdurmek icin herhangi baska bir karakter girin...\n");
scanf("\n%c",&secim);

}while (secim!='q' && secim!='Q');
	printf("program bitti");
	
return 0;
}
