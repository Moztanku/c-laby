#include<stdio.h>

int sd(int x) {
	int sum = 1;
	for (int i = 2; i < x; i++) {
		if (!(x % i)) sum += i;
	};
	return sum;
};
int cd(int x) {
	return sd(x) == x;
};

int main() {
	printf("Liczby doskonale:\n");
	for(int i = 0; i < 1000; i++) {
		if (cd(i)) {
			printf("    %i\n", i);
		}
	};
	printf("Liczby zaprzyjaznione:\n");
	for (int i = 2; i < 1000; i++) {
		for (int j = 1; j < i; j++) {
			if (sd(i) == j && sd(j) == i) {
				printf("    (%i,%i)\n", i, j);
			}
		}
	};
	return 0;
}
