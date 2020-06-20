#include<stdio.h>


int main()
{
	 float deger[4], veri[4], nokta, yp=0, p;
	 int i,j,verisayi;
	FILE *fp = fopen("VERI.txt","r");
	printf("Veri sayisini giriniz \n");
	 scanf("%d", &verisayi);
	 for(int k = 0 ; k < 4 ; k++ ){
		fscanf(fp,"%f",&veri[k]);
		fscanf(fp,"%f",&deger[k]);
	}
	 printf("İnterpolasyon noktasini girinizi \n ");
	 scanf("%f", &nokta);
	 
	 for(i=1;i<=verisayi;i++)
	 {
		  p=1;
		  for(j=1;j<=verisayi;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (nokta - deger[j])/(deger[i] - deger[j]);
			   }
		  }
		  yp = yp + p * veri[i];
	 }
	 printf("Cevap %.3f.", yp);
	 
	}