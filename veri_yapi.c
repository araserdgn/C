#include <stdio.h>
#include <stdlib.h>

struct n {
	int x;
	struct n *next;
};
typedef  struct n node;

void bastir(node *r){
	
	while(r!=NULL){
		printf("%d ",r->x);
		r=r->next;
	}
}

void ekle(node *r,int x){
	
	while(r->next!=NULL){
	r=r->next;
	}	
	r->next=(node*)malloc(sizeof(node));
	r->next->x =x;
	r->next->next =NULL;
	
}
node * sirala (node *r,int x){ /* main içindeki degissin diye NODE oldu */
	if(r==NULL){/* linkList bos ise doldr.*/
		r=(node*)malloc(sizeof(node)); /* kutu actým */
		r->next=NULL; /* son kutu oldg. icn next 0 */
		r->x = x;
		return r;
	}
	 if(r->x > x){ /* eski kutunun X i yeni kutunun X den buyukse demek */
					/* root degsti */
			node *temp =(node *)malloc(sizeof(node));
			temp->x = x;
			temp->next=r;
			return temp;
			
		}
	node *iter=r;
	while(iter->next != NULL && iter->next->x < x){
		iter =iter->next;
	}
	node *temp =(node *)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next=temp;
	temp->x = x;
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
	
	return 0;
} 

