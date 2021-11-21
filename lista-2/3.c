#include<stdio.h>

int main() {
	double sum = 0.0;
	int x = 0;
	while (sum < 10) {
		sum += (1.0 / ++x);
		printf("Suma czesciowa dla x= %i: %lf\n",x,sum);
	}
	printf("Nierownosc jest prawdziwa dla x >= %i.\n", x);
	return 0;
}
