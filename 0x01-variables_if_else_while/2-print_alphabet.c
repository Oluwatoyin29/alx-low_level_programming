#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * void: receives any argurment.
 *
 * Description: It prints the alphabet in lower case
 * can only use the putchar
 *
 * Return: the program returns 0
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

