#include <stdio.h>

//Matris çarpımı 3x3 matris

int main(){
	
int dizi[36],dizi1[16];

FILE *fp=fopen("matris2.txt","r");
FILE *fp1=fopen("matris1.txt","r");

int satir1,satir2,sutun1,sutun2;

fscanf(fp,"%d",&satir1);
fscanf(fp,"%d",&sutun1);

for(int i=0;i<satir1*sutun1;i++){
		fscanf(fp,"%d",&dizi[i]);
}
fscanf(fp,"%d",&satir2);
fscanf(fp,"%d",&sutun2);
for(int i=satir2*sutun2;i<satir2*sutun2*2;i++){
		fscanf(fp1,"%d",&dizi[i]);
}

int toplam=0,q=0;

for(int i=0 ;i<satir1*sutun1;i=i+satir1){
	
	for(int j=0 ;j<sutun1;j++){
		
		for(int k=0+i,x=satir1*sutun1+j ,c=0 ; c<satir1 ; k++,x=x+sutun1,c++){
			toplam+=dizi[k]*dizi[x];			
		}
		dizi1[q]=toplam;
		q++;
		toplam=0;
	}
}


FILE *fp2=fopen("sonuç.txt","w");
for(int l=0 ; l<satir1*sutun1 ;l++){
	fprintf(fp2,"%d ",dizi1[l]);
	if(l%satir1==satir1-1){
		fprintf(fp2,"\n");
	}
}

fclose(fp2);

fclose(fp1);

fclose(fp);
}