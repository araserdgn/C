#include <stdio.h>
/*dprizma yapisinin(struct)bildirimini buraya yazin*/

struct dprizma{
    int x;
    int y;
    int z;
};

/*dhacim fonksiyonun kodunu da buraya yazin*/

int dhacim(struct dprizma prizma)
{
    return prizma.x * prizma.y * prizma.z;
}
int main(){
	 int hacim; 
	 struct dprizma prizma;
	 
  printf("Boyutlarinin uzunluklari: ");
  scanf("%d%d%d",&prizma.x,&prizma.y,&prizma.z);


  hacim=dhacim(prizma);

   printf("Boyutlarinin uzunluklari %d,%d ve %d olan bir dikdortgenler prizmasi icin dhacim fonksiyonu %d doner.",prizma.x,prizma.y,prizma.z,hacim);
  
  return 0;		 
}







