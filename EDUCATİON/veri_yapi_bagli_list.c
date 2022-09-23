#include <stdio.h>
#include <stdlib.h>
#include "kutuphane.h"

/* kendi dosyamýzý olustrduk */

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
	
	root=sil(root,50);
	bastir(root);
	root=sil(root,4);
	bastir(root);
	
	
	return 0;
} 

