#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct nokta {
	float X,Y; /* noktanýn koordinatlari için ayirdik */
};

struct dogru{
	struct nokta N1,N2; /* dogrunun basý ve sonu */
};

struct dogru dogru_yarat(struct nokta n1,struct nokta n2){
	
	struct dogru D;
	
	D.N1=n1;
	D.N2=n2;
	
	return D;
	
}

void degistir_nokta(struct nokta *n1,struct nokta *n2){
	
	struct nokta gecici;
	
	gecici = *n1;
	*n1=*n2;
	*n2=gecici;
	
}

float dogru_boy(struct dogru L) {
	
	return sqrt((L.N1.X - L.N2.X)*(L.N1.X - L.N2.X) + (L.N1.Y - L.N2.Y)*(L.N1.Y - L.N2.Y));
	
		/* iki noktanin arasýndaki uzunluk */
		/* x2+y2 karekoku */	
}

int main () {
	
	struct nokta a,b;
	struct dogru L;
	float uzunluk;
	
	printf("Ilk nokta kordinat gir: ");
	scanf("%f %f",&a.X,&a.Y);
	
		printf("Ikinci nokta kordinat gir: ");
	scanf("%f %f",&b.X,&b.Y);
	
	L= dogru_yarat(a,b);
	
	printf("a noktasinin kordinatlari:\n");
	printf("Ax=%.2f Ay=%.2f\n",a.X,a.Y);
	
	printf("b noktasinin kordinatlari:\n");
	printf("Bx=%.2f By=%.2f\n",b.X,b.Y);
	
	printf("L dogrusunun 1. ve 2. nokta koordinatlari:\n");
	printf("1.nokta:\n");
	printf("%.2f %.2f\n",L.N1.X,L.N1.Y);
	printf("2.nokta:\n");
	printf("%.2f %.2f\n",L.N2.X,L.N2.Y);
	 
	printf("L dogrusunun uzunlugu: %.2f\n",dogru_boy(L));
	
	degistir_nokta(&a,&b);
	
	L= dogru_yarat(a,b);
	
	printf("a noktasinin kordinatlari:\n");
	printf("%.2f %.2f\n",a.X,a.Y);
	
	printf("b noktasinin kordinatlari:\n");
	printf("%.2f %.2f\n",b.X,b.Y);
	
	printf("L dogrusunun 1. ve 2. nokta koordinatlari:\n");
	printf("1.nokta:\n");
	printf("%.2f %.2f\n",L.N1.X,L.N1.Y);
	printf("2.nokta:\n");
	printf("%.2f %.2f\n",L.N2.X,L.N2.Y);
	
	printf("L dogrusunun uzunlugu: %.2f",dogru_boy(L));
	
	
	return 0;
}
