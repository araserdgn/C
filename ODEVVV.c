
/* Ismail ERDOGAN 200106206030 */

#include<stdio.h>

void cevir (int say, int bolen)
{
        int rem = say%bolen;

        if(say==0)
                return;
        cevir(say/bolen, bolen);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
                
               
}

int main()
{
	int num;
    char karakter;
	do{
	
        printf("Sayi giriniz : ");
        scanf("%d", &num);
        printf("Binary (2) : ");
        cevir(num, 2);
        
        printf("\nOctal (8) : ");
        cevir(num, 8);
        
        printf("\nHexadecimal (16) : ");
        cevir(num, 16);
        printf("\n");
        
         printf("Devam edelim mi? (E/e - H/h) ");
 		scanf(" %c", &karakter);
 			if(karakter == 'h' || karakter=='H') 
 				break;
 			while(karakter != 'e' && karakter != 'E') {
 				 printf("Devam edelim mi? (E/e - H/h) ");
 				 scanf(" %c",&karakter);
 			 if(karakter== 'h' || karakter=='H') 
 				break;
			}
    }while(karakter=='e' || karakter=='E');
        
		
		printf("Seans sona erdi.");

		 system ("pause"); 
        return 0;
}

