
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>


#define    f(x)  x*x*x-7*x*x+14*x-6

#define   g(x)   3*x*x-14*x+14
//İterasyon ile kök bulma
int main()
{
	 float baslangic, x1, f0, f1, g0, tolerans;
	 int adim = 1, maxiterasyon;
	 printf("\n Başlangic degeri veriniz \n");
	 scanf("%f", &baslangic);
	 printf("Tolerasyon degeri giriniz \n");
	 scanf("%f", &tolerans);
	 printf("maksimum iterasyon sayisi giriniz:\n");
	 scanf("%d", &maxiterasyon);
	 printf("\n adim \t \t baslangic \t \t f(baslangic) \t \t x1 \t \t f(x1)\n");
	 do
	 {
		  g0 = g(baslangic);
		  f0 = f(baslangic);
		  if(g0 == 0.0)
		  {
			   printf("Hata...");
			   exit(0);
		  }

		
		  x1 = baslangic - f0/g0;

		
		  printf("%d \t \t %f \t %f \t %f \t %f \n",adim,baslangic,f0,x1,f1);
		  baslangic = x1;
		  
		  adim = adim+1;
		
		  if(adim > maxiterasyon)
		  {
			   printf("iraksak fonksiyon");
			   exit(0);
		  }
		  
		  f1 = f(x1);
		  
	 }while(fabs(f1)>tolerans);
	
	 printf("\n kök   %f", x1);
}