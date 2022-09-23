#include<stdio.h>
struct dprizma{
    int x;
    int y;
    int z;
};

int dhacim(struct dprizma prizma)
{
    return prizma.x * prizma.y * prizma.z;
}

int main(){
	 int alan; 
	 struct dprizma prizma;
	 
  printf("Boyutlarinin uzunluklari ");
  scanf("%d,",&prizma.x);
  printf("boyutlarinin uzunluklari %d, ",prizma.x);
  scanf("%d",&prizma.y);
  printf("boyutlarinin uzunluklari %d,%d ve ",prizma.x,prizma.y);
  scanf("%d",&prizma.z);
  
  alan=dhacim(prizma);
   printf("boyutlarinin uzunluklari %d,%d ve %d olan bir dikdortgen prizmasi icin Hacmi %d'dir.",prizma.x,prizma.y,prizma.z,alan);
  

  return 0;		 
}

