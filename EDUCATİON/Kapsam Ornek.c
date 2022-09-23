#include <stdio.h>
int a = 5, b = 3;
float c = 10;

int ilk(float a, float b, int ch) {
printf("ilk #1 a = %.2f, b = %.2f, c = %.2f, ch = %d\n",(float)a, b, c, ch);
a = b + ch;
c--;
return(a + b--);
}

float ikinci(int a, float c) {
int ch = 2;
printf("ikinci #1 a = %.2f, b = %d, c = %.2f, ch = %d\n",(float)a, b, c, ch);
b = ilk(b,c,ch);
printf("ikinci #2 a = %.2f, b = %d, c = %.2f, ch = %d\n",(float)a, b, c, ch);
return(b*c);
}

int main() {
	
float b = 5.99, ch = 1.2;

printf("main #1 a = %.2f, b = %.2f, c = %.2f, ch = %d\n",(float)a, b, c, (int)ch);
a = ilk(ch,c,b);
printf("main #2 a = %.2f, b = %.2f, c = %.2f, ch = %d\n",(float)a, b, c, (int)ch);
ch = ikinci(c,b);
printf("main #3 a = %.2f, b = %.2f, c = %.2f, ch = %d\n",(float)a, b, c, (int)ch);

return 0;
}
