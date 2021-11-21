#include<stdio.h>
#include<stdlib.h>

int nwd(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int tau(int n) {
	int sum = 0;
	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n; y++) {
			if (nwd(x, y) == 1) {
				sum++;
			};
		}
	};
	return sum;
};
int main() {
	FILE* fp;
	fp = fopen("wykres.csv","w");
	double x = 0;
	for (int n = 1; n <= 1000; n++) {
		x = tau(n);
		printf("%i;%lf\n", n, x/(n*n));
		fprintf(fp, "%i;%lf\n", n, x / (n * n));
	};
	fclose(fp);
	return 0;
}
