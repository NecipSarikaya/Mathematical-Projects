#include <stdio.h>

int main() {
	double x[4], y[4], res[4], h;
	int i, j, k;

	for (i = 0; i < 4; i++) {
		printf("x degerini giriniz : ");
		scanf("%lf", &x[i]);
		printf("y degerini giriniz : ");
		scanf("%lf", &y[i]);
	}
	printf("h degerini giriniz : ");
	scanf("%lf", &h);
	for (j = 0; j < 4; j++) {
		if (j == 0) {
			res[0] = (1 / (2 * h)) * ((-3 * y[0]) + (4 * y[1]) - y[2]);
		}
		else if (j == 3) {
			res[3] = (1 / (2 * h)) * (y[1] - (4 * y[2]) + (3 * y[3]));
		}
		else {
			int x1 = j - h;
			int x2 = j - (2 * h);
			res[j] = (1 / (2 * h)) * (y[x2] - (4 * y[x1]) + (3 * y[j]));
		}
	}

	printf("x          y          sonuc \n");
	for (k = 0; k < 4; k++) {
		printf("%lf   %lf   %lf\n", x[k], y[k], res[k]);
	}

}