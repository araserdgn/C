#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};

struct node* top=NULL;

void push(int veri) { /* eleman ekleme */
	struct node* top;
	struct node* eklenecek =(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri; /* kutuda degerimizin icine att�k */
	eklenecek->next=NULL; /* yaln�z kald�g� �c�n */
	if(top !=NULL)  // onceden eleman var yani //
	eklenecek->next=top;
	top=eklenecek; /* top art�k en son gelen kutu */
	
}

void pop () {
	struct node* top;
	if(top->data ==NULL){
		printf("Stack bos , doldurun �nce..\n");
	}
	else {
		struct node* temp; /* kutularda dolanacak KUTU */
		temp=top;
		top=top->next; /* 1 <- 2 <- 3 biz 3 � silecegiz, o zaman top degeri, tempin nexti olmai */
						/* kii art�k yeni top 2 olsun */
		free(temp); /* deger silindi */	
	}
}
	
int peek () { /* en son deger dondurur */
		return top->data;
	}	
	
void yazdir() {
		
		struct node* q;
		q=top;
		printf("\n");
		while(q!=NULL) {
			printf("%d <=",q->data);
			q=q->next; /* diger degeri g�stersn */
		}
		printf("NULL ");
	}


int main () {
	int secim;
	while (1==1) {
		printf("\n1 - Push");
		printf("\n2 - Pop");
		printf("\n3 - Peek");
		printf("\ - Yapmak ist. islemi sec... = ");
		scanf("%d",&secim);
	
	
	switch (secim ){
		case 1:
			printf("\girmek istedigin sayi ?...");
			scanf("%d",&secim);
			push(secim);
			yazdir();
			break;
		case 2:
			pop();
			yazdir();
			break;
		case 3:
			printf("Top eleman => %d ",peek());
			break;		
	}
}
	
	return 0;
}
