#include <stdio.h>
#include <stdlib.h>
void buyut(char *metin) {
	int fark = 'a' - 'A';
	
	 while (*metin != '\0') {
        
        if (*metin >= 'a' && *metin <= 'z') 
            *metin -= fark;
        *metin++;
    }

}

int main() {
	char *dizgi;
	int i;
	dizgi = (char *)malloc(100*sizeof(char));

	for (i=0; i<10; i++) {
		printf("Dizgi gir: ");
		scanf("%s", dizgi); /* & kullanmak gereksiz */
		buyut(dizgi);
		printf("%s\n", dizgi);
}
	
return 0;
}
 




