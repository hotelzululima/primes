#include "primecheck.h"
#include <math.h>

int check(int num)
{
	int i;
	int isprime = 1;
	for(i = 2; i < num; i++)
	{
		if ( num % i == 0  && num != 2 )
		{
			isprime = 0;
			break;
		}
	}
	return isprime;
}

int lucas_lehmer(int p)
{
	int mersenne = pow(2, p) - 1;
	int i;
	int results[p - 2];
	results[0] = 4;
	for(i = 1; i <= p - 2; i++)
	{
		results[i] = ( pow(results[i - 1], 2) - 2 );
		results[i] = results[i] % mersenne;
	}

	if( results[p - 2] == 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
