#include<stdio.h>
#include<math.h>

int main() {
	int a, b, i, x = 0;
	float y = 0, z = 0, SD;
	scanf_s("%d %d", &a, &b);
	if (a == b) {

		printf("%d", a);
		printf("\nAverage = %.1f", float(a));
		printf("\nSD = 0.00");


	}
	else if (a < b) {
		for (i == b; a <= b; a++) {
			printf("%d  ", a);
			x += a;
			y += 1;
			z += a * a;
		}
		printf("\nAverage = %.1f", x / y);
		SD = sqrt((y * z - x * x) / (y * (y - 1)));
		printf("\nSD = %.2f", SD);
	}
	else if (a > b) {
		for (i == a; b <= a; b++) {
			printf("%d  ", b);
			x += b;
			y += 1;
			z += b * b;
		}
		printf("\nAverage = %.1f", x / y);
		SD = sqrt((y * z - x * x) / (y * (y - 1)));
		printf("\nSD = %.2f", SD);
	}

	return 0;
}