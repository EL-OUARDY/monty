#include "monty.h"

/**
 * is_numeric - check a string if it is a valid number
 * @str: string to use
 *
 * Return: (1) numeric, (0) not numeric
 */
int is_numeric(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0); /* empty string is not numeric. */

	/* handle optional minus sign at the beginning. */
	if (*str == '-')
		str++; /* move past the minus sign. */

	while (*str) /* if any character is not a digit, it's not numeric. */
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1); /* all characters are digits, so it's numeric. */
}
