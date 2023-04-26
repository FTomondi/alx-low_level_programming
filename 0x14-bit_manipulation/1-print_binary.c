#include <main.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary format.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Recursively divide n by 2 and print remainder */

	_putchar((n & 1) + '0'); /* Print the remainder of n (LSB) as a binary digit */
}
