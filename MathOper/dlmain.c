#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char *argv[])
{
	void *handle;
	int (*add)(int, int), (*sub)(int, int), (*mul)(int, int);
	float (*div)(int, int);
	char *error;
	handle = dlopen("./lib/MathOper.so", RTLD_LAZY);
	if (!handle)
	{
		fputs(dlerror(), stderr);
		exit(1);
	}
	add = dlsym(handle, "add");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	sub = dlsym(handle, "sub");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	mul = dlsym(handle, "mul");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}
	div = dlsym(handle, "div");
	if ((error = dlerror()) != NULL)
	{
		fprintf(stderr, "%s", error);
		exit(1);
	}

	printf("add(2,5) = %d\n", add(2, 5));
	printf("sub(2,5) = %d\n", sub(2, 5));
	printf("mul(2,5) = %d\n", mul(2, 5));
	printf("div(2,5) = %.2f\n", div(2, 5));
	dlclose(handle);
}

