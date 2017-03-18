
#include <stdio.h>
#include <stdlib.h>
#include "sof.h"

unsigned long sof(unsigned long t, unsigned long a, unsigned long b) {

	unsigned long result = 0;
	
	while (b <= t) {
		if (b % 2 != 0)
		{
			result += b;
		}
		b += a;
		a = b - a;
	}
	return result;
}