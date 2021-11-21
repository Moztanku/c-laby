#include<stdio.h>
#include<math.h>

int main() {
	double sum = 1;
	double summ = 1;
	for (int x = 0; x < 10; x++) {
		sum = 1;
		for (int i = 100 * x + 1; i <= 100 * (x + 1); i++) {
			sum = sum * i;
		};
		sum = pow(sum, 0.001);
		summ = summ * sum;
	};
	printf("%lf\n", summ);
	return 0;
}
