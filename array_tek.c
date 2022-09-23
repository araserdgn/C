#include <stdio.h>
int carp(int matris [],int size){
	int i,carpm=1;
	
	for(i=0;i<size;i++){
		carpm*=matris[i];
	}
	
	return carpm;
}

int main () {
	int sayilar[5]={1,2,3,4,5};
	
	printf("%d",carp(sayilar,5));
	
	return 0;
}
