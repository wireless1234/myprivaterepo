#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - main function
 *@argc: number
 *@argv: the arguments
 *Return: calculation
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func_ptr)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	func_ptr = get_op_func(operator);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
