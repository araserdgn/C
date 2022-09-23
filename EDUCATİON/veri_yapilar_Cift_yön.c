#include <stdio.h>
#include <stdlib.h>

struct n {
	int x;
	struct n *next;
	struct n *prev;
};
typedef  struct n node;

void bastir(node *r){

	while(r!=NULL){ /* iter root(bas. deg.) eþit olana kadr */
		printf("%d ",r->x); /* degerleri bastýrýr */
		r=r->next; 
	}
	printf("\n");
}


node * sirala (node *r,int x){ /* main içindeki degissin diye NODE oldu */
	if(r==NULL){/* linkList bos ise doldr.*/
		r=(node*)malloc(sizeof(node)); /* kutu actým */
		r->next=NULL; /* son kutu oldg. icn next 0 */
		r->prev=NULL;
		r->x = x;
		return r;
	}
	 if(r->x > x){ /* eski kutunun X i yeni kutunun X den buyukse demek */
					/* root degsti */
			node *temp =(node *)malloc(sizeof(node)); /* temp yeni dugum icin */
			temp->x = x; /* temp dolandgi icin bir onceki boslkta durmali */
			temp->next=r;
			r->prev =temp;
			return temp; /* bas artýk temp oldu */
			
		}
	node *iter=r; /* dolaniyor, basta su an */
	while(iter->next != NULL && iter->next->x < x){
		iter =iter->next;
	}
	node *temp =(node *)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next=temp;
	temp->prev=iter;
	if(temp->next !=NULL)
		temp->next->prev =temp;
	temp->x = x;
	return r;
		
}
node *sil(node *r,int x){
	node *iter=r;
	node *temp;
	if(r->x == x){ /*ilk eleman silme durumu*/
		temp=r;
		r= r->next;
		free(temp);
		return r;
	}
	/* ortadan eleman silme */
	while(iter->next != NULL && iter->next->x != x){ /* aradýgýmýz x deger. farklý iken don */
		iter= iter->next;
	}
	if(iter->next == r) {
		printf("Sayi bulunamadi.");
		return r;	
	}
	temp = iter->next; /* silincek ara deg */
	iter->next = iter->next->next; /* aradaki degerden kop digerine baglan */
	free(temp);
	if(iter->next != NULL)
		iter->next->prev =iter ;/* geri dönus */
	return r;
}	
	

int main() {
	int x,i;
	node *root;
	root= NULL;
	root=sirala(root,400);
	root=sirala(root,40);
	root=sirala(root,100);
	root=sirala(root,120);
	root=sirala(root,200);
	root=sirala(root,50);
	root=sirala(root,4);

	bastir(root); 
	printf("\n");
	/* aradan degerler silip siraladik */
	root=sil(root,50);
	bastir(root);
	root=sil(root,4);
	bastir(root);
	root=sil(root,400);
	bastir(root);
	
	
	return 0;
} 

