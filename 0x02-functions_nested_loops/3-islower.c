#include "main.h"


/**
 * _islower - returns 1 if char is a lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, otherwise 0
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

