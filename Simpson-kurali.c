#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x*x -2*x*x + 5

double kural(double min, double max) {
	double sonuc;
	double orta, orta1, artirma;
	artirma = (max - min) / 3;
	orta = min + artirma;
	orta1 = orta + artirma;
	sonuc = (double)(3 * (artirma / 8)) * (f(min) + (3 * f(orta)) + (3 * f(orta1)) + f(max));
	return sonuc;
}

int main() {
	double min, max, sonuc = 0, h, alt, ust;
	int n, i;
	printf("alt degeri giriniz: ");
	scanf("%lf", &min);
	printf("ust degeri giriniz: ");
	scanf("%lf", &max);
	printf("kac parcaya ayirmak istediginizi giriniz: ");
	scanf("%d", &n);

	h = (max - min) / n;
	for (i = 0; i < n; i++) {
		alt = min + i * h;
		ust = alt + h;
		sonuc += kural(alt, ust);
	}
	printf("Sonuc : %lf", sonuc);

}