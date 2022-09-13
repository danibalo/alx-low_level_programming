#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int _islower(int c)
{
	_islower = islower();

	if (_islower(c))
	{
		printf("%d is lower case \n", 1, _islower);
	}
	else
	{
		printf("%d is not\n", 0);
	}
}

