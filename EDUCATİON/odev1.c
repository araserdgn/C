#include <stdio.h>
#include<conio.h>

int main ()
{

int n, i, j, toplam;
    toplam =0;
int mat[10][10];

printf("Matrisin boyutunu giriniz : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
                 {
                 
                 printf("%d. satir ,%d.sutun elemani : ",i,j);
                 scanf("%d",&mat[i][j]);
                 }
for(i=1;i<=n;i++)

toplam=toplam+mat[i][i];
printf("Toplam : %d",toplam);

getch();
}
