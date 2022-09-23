#include <stdio.h>


int main () {
	
	int Ksayac[26]={0};
	int Bsayac[26]={0};
	char kar;
	int i;
	printf("Karakterleri gir: \n");
	scanf("%c",&kar);
	
	while(kar != '%'){
		if(kar >='a' && kar<='z' )
			Ksayac[kar-'a']++;
			/* c girdik mesela 3-1 den 2. odacaigi
				say. arttırrı. yani C odası +1 olur */
				 
		else if(kar>='A' && kar<'Z')
			Bsayac[kar-'A']++;	
		
		scanf("%c",&kar);	
	}
	
	
	printf("\n Kucuk Harflerin SAyilari\n\n");
	
	for(i=0;i<26;i++){
		printf("%d ",Ksayac[i]);
	}
	
	printf("\n Buyuk Harflerin SAyilari\n\n");
	for(i=0;i<26;i++){
		printf("%d ",Bsayac[i]);
	}
	
	return 0;
}
