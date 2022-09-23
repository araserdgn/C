#include <stdio.h>



int main() {
 int Ksayac[26]={0};
 int Bsayac[26]={0};
 int Rsayac[10]={0};
 char kar,x;
 char dt;
 int i,j;
 do{
 printf("Karakterleri gir: ");
 scanf(" %c",&kar);
 while(kar!='0'){
 	if(kar>='A' && kar<='Z')
   Bsayac[kar-'A']++;
   if(kar >='a' && kar<='z' )
   Ksayac[kar-'a']++;
  
  else if(kar>='0' && kar<='9')
   Rsayac[kar-'0']++;
  scanf(" %c",&kar);
 }
 for(i=0;i<26;i++){
  if (Bsayac[i] != 0)
  printf("%c Harfinden %d kere tekrarlanmistir..\n",i+'A',Bsayac[i]);
  else if (Ksayac[i] != 0)
  printf("%c Harfinden %d kere tekrarlanmistir..\n",i+'a',Ksayac[i]);
  
  }
 for(j=0;j<10;j++){
  if (Rsayac[j] != 0)
  printf("%d sayisindan %d kere tekrarlanmistir..\n",j,Rsayac[j]);
 }

 printf("tamammi devammi: ");
 scanf(" %c", &dt);
 if(dt == 'b' || dt=='B') 
 break;
 while(dt != 'd' && dt != 'D') {
  printf("tamam mi? devam mi?: ");
  scanf(" %c",&dt);
  if(dt == 'b' || dt=='B') 
 break;
}
 }while(dt == 'd' || dt == 'D');
  printf("Program bitti.");
 return 0;
}
