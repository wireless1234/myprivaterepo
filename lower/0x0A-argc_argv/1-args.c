#include <stdio.h>
#include <stdlib.h>
/**
 *main - print argc
 *@argc: argument
 *@argv: argument
 *Return: 0
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", (argc - 1));
	return (0);
}
