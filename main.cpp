#include <iostream>

typedef int (*f)(int *, int);
int measure(f);
int fake_sort(int *array, int n);

int main (int argc, char *argv[])
{
	measure(&fake_sort);
	
	return 0;
}

int fake_sort(int *array, int n)
{
	return 0;
}
