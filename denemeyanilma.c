#include <stdio.h>
#include <stdlib.h>

struct Dugum{
	int veri;
	struct Dugum *sa;
	struct Dugum *so;
};

struct Dugum* yeni_dugum(int sayi);
void yaz(struct Dugum *kok);
struct Dugum* ekle(struct Dugum *kok,int veri);


int main(void){
	struct Dugum *agac=NULL;
	int sayi;
	scanf("%d",&sayi);
	while(sayi!=-1){
			agac=ekle(agac,sayi);
			scanf("%d",&sayi);
	}
	yaz(agac);
	return 0;
}

struct Dugum* yeni_dugum(int sayi){
	struct Dugum* tmp=(struct Dugum *)malloc(sizeof(struct Dugum));
	tmp->sa=NULL;
	tmp->so=NULL;
	tmp->veri=sayi;
	return tmp;	
}

void yaz(struct Dugum *kok){
	if(kok!=NULL){
		yaz(kok->so);
		printf("%d ->",kok->veri);
		yaz(kok->sa);
	}
}

struct Dugum* ekle(struct Dugum *kok,int sayi){
	if(kok==NULL) 
		return yeni_dugum(sayi);
	if(sayi < kok->veri)
		kok->so= ekle(kok->so,sayi);
	else
		kok->sa=ekle(kok->sa,sayi);
}
