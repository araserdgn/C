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
gets(S);				/* dizi i�ine yaz,ENTERle komutu */
gecici = strtok(S, jeton); /* strtok istenmeyenleri tartar ve siler */
							/* S dizisini taradi, jetonda olan argumanlardan
								varsa onlari dizgiden �ikartti ve d�zeltti */

while (gecici != NULL) {
sayilar = (float *)realloc(sayilar,(i+1)*sizeof(float));

sayilar[i] = atof(gecici); /* ATOI girilken dizgide tam sayilari d�ner */
							/* ATOF girilken dizgide reel sayilari d�ner */
i++;
gecici = strtok(NULL, jeton); /* NULL dizisini taradi, jetonda olan argumanlardan
								varsa onlari dizgiden �ikartti ve d�zeltti */
}

for (j=0; j<i; j++)
printf("%.3f ",sayilar[j]);
printf("\n");

free(gecici); 	/* dizinin i�i temizlendi. */
free(sayilar);	/* dizinin i�i temizlendi. */
return 0;
}
