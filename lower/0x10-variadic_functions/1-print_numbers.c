#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - print all numbers
 *@separator: agument
 *@n: argument
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
