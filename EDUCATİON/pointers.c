#include <stdio.h>
int main() {
int a = 3, *x, *y;
y = &a; /*y degiskenine a'nin adresi ataniyor*/

printf("%d\n",y);
x = y; /*y x'e kopyalaniyor, yani x de a'nin
adresini tutuyor*/
printf("%d\n",x);
*y += 1; /*y tarafindan tutulan adresteki degiskene
eris, sonra o degiskenin degerini 1 artir,
yani a = 4 olsun*/
printf("%d\n",a);
y = y+1; /*y isaretcisinin degerini 1 artir, simdi
y a degiskeninden hemen sonraki degiskenin
adresini tutuyor (tamsayilara gore)*/
printf("%d\n",y);
y--; /*y isaretcisinin degerini 1 azalt, simdi
y a degiskeninin adresini tutuyor.*/
printf("%d\n",y);
return 0;
}
