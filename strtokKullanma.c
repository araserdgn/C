#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

int main() {
char S[max], *gecici;
char *jeton = " ,\t?*%";
float *sayilar = NULL ;
int i = 0, j;

printf("Girin: \n");
gets(S);				/* dizi içine yaz,ENTERle komutu */
gecici = strtok(S, jeton); /* strtok istenmeyenleri tartar ve siler */
							/* S dizisini taradi, jetonda olan argumanlardan
								varsa onlari dizgiden çikartti ve düzeltti */

while (gecici != NULL) {
sayilar = (float *)realloc(sayilar,(i+1)*sizeof(float));

sayilar[i] = atof(gecici); /* ATOI girilken dizgide tam sayilari döner */
							/* ATOF girilken dizgide reel sayilari döner */
i++;
gecici = strtok(NULL, jeton); /* NULL dizisini taradi, jetonda olan argumanlardan
								varsa onlari dizgiden çikartti ve düzeltti */
}

for (j=0; j<i; j++)
printf("%.3f ",sayilar[j]);
printf("\n");

free(gecici); 	/* dizinin içi temizlendi. */
free(sayilar);	/* dizinin içi temizlendi. */
return 0;
}
