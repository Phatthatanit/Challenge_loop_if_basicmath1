#include<stdio.h>
#include<math.h>

int main() {
	int a, b, i, x = 0;
		float y=0,z=0;
	scanf_s("%d %d", &a,&b);
	//printf("%d %d", a,b);
	if (a < b) {
		for (i == b; a <= b; a++) {
			printf("%d  ", a);
			x += a;
			y += 1;
		}
		printf("\nAverage = %.1f", x/y);
	}
	else if (a > b) {
		for (i == a; b <= a; b++) {
			printf("%d  ", b);
			x += b;
			y += 1;
		}
		printf("\nAverage = %.1f", x/y);
		
	}

	return 0;
}