#include <stdio.h>
#include <stdlib.h>

/* dizgiler */

int struzunluk(char *str){
	int sayac=0;
	
	while(str[sayac] !='\0')
		sayac++;
		
	return sayac;
}

void strkopyala(char *kaynak,char *hedef){
	
	int i;
	
	for(i=0;kaynak[i] != '\0';i++)
		hedef[i]=kaynak[i];
		hedef[i]='\0';
	
}

int main() {
	
	char str1[]="selamun alukum";
	char str2[]="eyy ecnebi insan turu seni.";
	char *kstr,*hstr;
	char *P, *C;
	
	printf("%s dizisinin uzunlugu %d dir\n\n.",str1,struzunluk(str1));
	printf("%s dizisinin uzunlugu %d dir\n\n.",str2,struzunluk(str2));
	
	kstr=(char*)malloc(10*sizeof(char));
	hstr=(char*)malloc(10*sizeof(char));
	
	kstr[0]='p';
	kstr[1]='o';
	kstr[2]='r';
	kstr[3]='t';
	kstr[4]='a';
	kstr[5]='k';
	kstr[6]='a';
	kstr[7]='l';
	kstr[8]='\0';
	
	hstr[0]='a';
	hstr[1]='t';
	hstr[2]='\0';
	
	printf("%s dizisinin uzunlugu %d dir\n\n.",kstr,struzunluk(kstr));
	printf("%s dizisinin uzunlugu %d dir\n\n.",hstr,struzunluk(hstr));
	
	strkopyala(kstr,hstr);
	
	printf("\n\n");
	printf("%s dizisinin uzunlugu %d dir\n\n.",kstr,struzunluk(kstr));
	printf("%s dizisinin uzunlugu %d dir\n\n.",hstr,struzunluk(hstr));
	
	
	P = (char *)malloc((struzunluk("mavi")+1)*sizeof(char));
	strkopyala("kirmizi",P);
	printf("P = %s\n", P);
	C = (char *)malloc((struzunluk(P)+1)*sizeof(char));
	strkopyala(P, C);
	printf("C = %s\n", C);
	
	return 0;
}
