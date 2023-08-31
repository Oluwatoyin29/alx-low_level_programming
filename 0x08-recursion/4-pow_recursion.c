#include "main.h"
/**
 * _pow_recursion - returns power of recursion
 * @x:int
 * @y:int
 * Return:int X on success or else 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}

