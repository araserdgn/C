#include <stdio.h>
/*silindir yapisinin(struct)bildirimini buraya yazin*/
struct dsilindir{
    int x;
    int y;
};

/*shacim fonksiyonun kodunu da buraya yazin*/

int dhacim(struct dsilindir silindir)
{
	#define pi 3
    return (silindir.x * silindir.x)* silindir.y * pi;
}
int main(){
	 int hacim; 
	 struct dsilindir silindir;
	 
  printf("Taban yaricapi ve yukseklik gir: ");
  scanf("%d%d",&silindir.x,&silindir.y);

  hacim=dhacim(silindir);

   printf("Taban yaricapi %d ve yuksekligi %d olan bir silindir icin shacim fonksiyonu %d doner.",silindir.x,silindir.y,hacim);
  
  return 0;		 
}





