void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 2;
}

int main(int argc, char* argv[])
{
	f();

	return 0;
}

