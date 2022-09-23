#include <stdio.h>

int main() {
	 char kar[101];
	 int i=0,j;
	 
	 printf("Karakter gir: \n");
	 scanf("\n%c",&kar[i]);
	 
		while (kar[i] != '\n'){
			
			if(kar[i] >='a' && kar[i]<='z')
				kar[i] += 'A'-'a';
			else if(kar[i] >='A' && kar[i]<='Z')
				kar[i] += 'b'-'B';
			else if (kar[i] >='0' && kar[i] <='8')
				kar[i]++;		
			else if (kar[i]=='9')
				kar[i]='0';
			
			
			scanf("%c",&kar[++i]);
			
			if(i==100 && kar[i] != '\n'){
			
				printf("Hatali girdi.");
				return -1;
			}
		}
			printf("ciktisi.\n");	 
	 	
		 for(j=0;j<i;j++)
	 	
	 		printf("%c",kar[j]);
	 		printf("\n\n");
	 		
	
	return 0;
}
