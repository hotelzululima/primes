#include "primecheck.h"
#include <stdio.h>

int main(int argc, char *argv[])
{	
	int verbose = 0;

	int i = 2;
	while(1)
	{
		if ( check(i) )
		{
			printf("%d is a prime\n", i);
		}
		else if ( verbose == 1 )
		{
			printf("%d is not a prime\n", i);
		}
		i++;
	}
	return 0;
}
