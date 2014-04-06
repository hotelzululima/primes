#include "primecheck.h"
#include <stdio.h>

int main()
{
	int p = 2;
	while(1)
	{
		if( lucas_lehmer(p) )
		{
			printf("M(%d) = 2 ^ %d - 1 is a prime!\n",p,p);
		}
		p++;
	}
	return 0;
}
