#include <stdio.h>
#include <stdlib.h>

struct n{
	int data;
	int *next;
};
typedef struct n node;

 node *root=NULL;
node *son=NULL; /* en sonuncu elemaný tutar */

void enque(int x) {
	if(root==NULL) { /* 1 elemanlý kutu ise icinie eleman ekl */
		root=(node*)malloc(sizeof(node));
		root->data=x;
		root->next=NULL;
		son=root;
	}
	else {
		son->next=(node*)malloc(sizeof(node)); /* yeni kutu actk */
		son->next=x;
		son=son->next;
		son->next=NULL;
	}
}
int deque() {
	if(root==NULL) {
		printf("Linkled List bos.");
		return -1;
	}
	int rvalue =root->data; /* silinecek deger */
	node *temp=root; /* silinecek deg. tutar */
	root=root->next; /* deger silindi, yeni bas. deg. diger x gösterir */
	free(temp); /* kutu silindi */
	return rvalue;
}



int main () {
		int i;
	for(i=0;i<20;i++) {
		enque(i*10);
	}
	for(i=0;i<20;i++) {
		printf("%d ",deque());	
	}
	for(i=0;i<20;i++) {
		enque(i*10);
	}	
	for(i=0;i<30;i++) {
		printf("%d ",deque());	
	}

	
	return 0;
}
