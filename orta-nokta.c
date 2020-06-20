
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x*x-7*x*x+14*x-6


//Orta nokta yöntemiyle kök bulma
int main()
{
	 float a, b, kok, f0, f1, f2, tolerasyon;
	 int adim = 1;
	 x:
	 printf("\n Araligi giriniz \n");
	 scanf("%f%f", &a, &b);
	 printf("Tolerasyon değerini giriniz \n");
	 scanf("%f", &tolerasyon);
	 f0 = f(a);
	 f1 = f(b); 
	 printf("\n adim \t \t a \t \t b \t \t kok \t \t f(kok) \n");
	 do
	 {
		  kok = (a + b)/2;
		  f2 = f(kok);
		
		  printf("%d \t \t %f \t %f \t %f \t %f \n",adim, a, b, kok, f2);
		
		  if( f0 * f2 < 0)
		  {
			   b = kok;
			   f1 = f2;
		  }
		  else
		  {
			   a = kok;
			   f0 = f2;
		  }
		  adim = adim + 1;
	 }while(fabs(f2)>tolerasyon);
	 printf("\nkok  %f", kok);
}