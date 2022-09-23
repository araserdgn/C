#include <stdio.h>
#include <stdlib.h>
int main()
{
char metin[100];
int sayac=0,kSayac[26]={0}, bSayac[26]={0};
int i,j;
char karakter;
printf("Metin giriniz:");
gets(metin);
while(metin[sayac] != '\0')
{
karakter= metin[sayac];
if(karakter>='a' && karakter<='z')
kSayac[karakter-'a']++;
else if(karakter>='A' && karakter<='Z')
bSayac[karakter-'A']++;;
sayac++;
}
		
			for(i=0;i<26;i++){
		
		if (kSayac[i] != 0)
		printf("%c Harfinden %d kere tekrarlanmistir..\n",i+'a',kSayac[i]);
		
		else if (bSayac[i] != 0)
		printf("%c Harfinden %d kere tekrarlanmistir..\n",i+'A',bSayac[i]);	

		}	



return 0;
}
