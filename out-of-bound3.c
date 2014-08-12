#include <stdlib.h>
#include <stdio.h>

void set_val(float* in, int dim)
{
	float out[dim * dim];
	
	*in = out[1] + out[dim];
}

int main(int argc, char* argv[])
{
	float b[10];
	unsigned int i;
	
	for (i = 0; i < 10; ++i)
	{
		set_val(&b[i], 30000);
	}

	return 0;
}

