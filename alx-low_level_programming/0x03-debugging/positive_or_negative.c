#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		print ("%d is positiver\n", i);
	else if (i == 0)
		print("%d is zero\n", i);
	else
		print("%d is negative\n", i)
}
