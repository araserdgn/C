#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main(){
 
char a[100];
int b,c=0,d,i=0,xx;
int x[100];
 
printf("kelimenizi giriniz:  ");
for(i=0;i<=100;i++){
 
x[i]=0;
 
}
gets(a);
xx=strlen(a);
b=strlen(a);
 
for(c=0;c<xx;c++){
b=xx;
for(b-1;b>=0;b--){
if(a[c]==a[b]){
 
x[c]++;
 
}
}
}
 
for(c=0;c<xx;c++){
 
printf("%c harfi %d kere girilmiþtir...\n",a[c],x[c]);
}
 
getch();
return 0;
}
