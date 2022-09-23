#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* root;

struct node* newNode(int key) { /* yeni dug. olstr */
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=key;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL) 
		root=temp;
	
	return temp;	
};

void inorder (struct node* root) {
	
	if(root != NULL) {
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
	
}

struct node* ekle (struct node* node, int key) {
	
	if(node==NULL)
		return newNode(key);
		
	if(key < node->data) 
			node->left=ekle(node->left,key);
	else if(key > node->data)
			node->right=ekle(node->right,key);		
};


	
int main () {
	
	int secim;
	
	while(1==1) {
		printf("\n 1- SAyi ekle..");
		printf("\n 2- Inorder travelsal..");
		printf("\n 3- Arama yapin..");
		printf("\n Seciminizi yapin..");
		scanf("%d",&secim);
		
		switch(secim) {
			case 1:
				printf("\n Girmek stediginiz sayi...");
				scanf("%d",&secim);
				ekle(root,secim);
				break;
			case 2:
				inorder(root);
				break;	
		/*	case 3:
				printf("Hangi sayiyyi ariyosun...?");
				scanf("%d",&secim);
				search(secim);
				break;	*/
		}
	}
	
	
	return 0;
}
