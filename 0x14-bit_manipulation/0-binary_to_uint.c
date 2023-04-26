#include <main.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL) /* If b is NULL, return 0 */
		return (0);

	size_t len = 0;
	unsigned int result = 0;

	while (b[len] != '\0') /* Calculate length of b */
		len++;

	for (size_t i = 0; i < len; i++)
	{
		if (b[i] == '0')
			result <<= 1; /* Shift left by one bit */
		else if (b[i] == '1')
			result = (result << 1) | 1; /* Shift left by one bit and set LSB to 1 */
		else /* If a char in b is not 0 or 1, return 0 */
			return (0);
	}

	return (result);
}
