#include <stdio.h>
#include <math.h>

#define kucuk 0.000001
#define esit(a,b) ((a)-(b) <= kucuk && (b)-(a) <= kucuk)

int iddenklem(double a,double b,double c,double *x1,double *x2){
	
	double delta;
	
	delta = b*b-4*a*c;
	
	if(esit(delta,0.0)) {
		*x1 = -b/(2*a);
		*x2=*x1;
		return 1;
	}
	else if(delta > 0){
		*x1 = (-b-sqrt(delta))/(2*a);
		*x2 = (-b+sqrt(delta))/(2*a);
		return 2;
	}
	else 
		return 0;
}

int main() {
	double a,b,c;
	double x1,x2;
	
	printf("a,b ve c gir: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	switch (iddenklem(a,b,c,&x1,&x2)) {
		case 0:
			printf("Gercek kok yok.\n");
			break;
		case 1:
			printf("Bir kok var.");
			printf("Kok1= %.2lf",x1);
			break;
		case 2:
			printf("Iki kok var.\n");
			printf("Kok1=%.2lf\n kok2=%.2lf",x1,x2);
		default:	
			break;			
	}
	
	
	
	return 0;
}
