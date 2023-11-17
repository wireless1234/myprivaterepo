#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print strings
 *@separator: argument
 *@n: argument
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;
	char *mystring;

	if (separator == NULL)
		separator = "";
	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		mystring = va_arg(mylist, char *);
		if (mystring == NULL)
			printf("(nil)");
		else
			printf("%s", mystring);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
