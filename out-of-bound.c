#include <stdlib.h>
#include <stdio.h>
#define SIZE 1000
int main(int argc, char* argv[])
{
	float *a, b;
	int i, j, k = SIZE;

	j = k * 2;
	a = (float*) malloc(sizeof(float) * SIZE);

	for(i = 0; i < SIZE; ++i) {
		a[i] = 0.03 * i;
		a[j + 1000] = a[i];
	}

	b = a[i];
	a[i] = a[0];
	a[0] = b;

	free(a);
	return 0;
}
