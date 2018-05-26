#include <stdio.h>
#include <stdlib.h>

int get_prime(int nth)
{
	return 1;
}

int main (int argc, char *argv[])
{
	int nth_prime = atoi(argv[1]);
	int val;
	val = get_prime(nth_prime);
	printf("The %d prime = %d \n", nth_prime, val);
	return 0;
}
