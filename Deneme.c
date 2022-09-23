
/* Ismail Erdogan 200106206030 */

#include <stdio.h>
 char kar;
void karakter() {
 int Ksayac[26]={0};
 int Bsayac[26]={0};
 int Rsayac[10]={0};
 int i,j,k;
 printf("Karakterleri gir: ");
 scanf("%c",&kar);
 while(kar!='\n'){
  if(kar >='a' && kar<='z' )
   Ksayac[kar-'a']++;
  else if(kar>='A' && kar<='Z')
   Bsayac[kar-'A']++;
  else if(kar>='0' && kar<='9')
   Rsayac[kar-'0']++;
  scanf("%c",&kar);
 }
 for(i=0;i<26;i++)
  if (Ksayac[i] != 0){
  printf("%c Harfinden %d kere tekrarlanmistir..\n",'a'+i,Ksayac[i]);

	}
  for(k=0;k<26;k++)		
  if (Bsayac[k] != 0){
  printf("%c Harfinden %d kere tekrarlanmistir..\n",'A'+k,Bsayac[k]);

}
 for(j=0;j<10;j++)
  if (Rsayac[j] != 0){
  printf("%d sayisindan %d kere tekrarlanmistir..\n",j,Rsayac[j]);
}
  printf("tamam mi?(b/B) devam mi?(d/D): ");
 }
   int main(){
      char z;
        karakter();
        scanf("%c",&z);
        while (z!='b' &&  z!='B'){
               if(z== 'd'||z=='D'){
                scanf("%c",&kar);
                  karakter();
            }  
               else{
                printf("tamam mi?(b/B) devam mi?(d/D): ");       
                  getchar();
			 }
                scanf("%c",&z);         
        }  
			printf("Program bitti.");
 
 system ("pause");
 return 0;
}
