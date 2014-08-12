#include <stdlib.h>
#include <stdio.h>

#define DIM 1039596

int main(int argc, char* argv[])
{
	float* a;
	int i, j;
	int mydim = DIM;
	a = (float*) malloc(sizeof (float) * mydim);
	printf("I'm here but how do I find the ERROR!\n");
	j = mydim;
	for (i = 0; i < mydim; ++i)
	{
		a[i] = i;
		if (i > mydim - 2)
		{
			a[j + 1000] = a[i];
			a[mydim - 1] = a[i];
		}
	}
	printf("a = %f \n", a[0]);
	printf("GOOD END \n");
	free(a);
	return 0;
}
