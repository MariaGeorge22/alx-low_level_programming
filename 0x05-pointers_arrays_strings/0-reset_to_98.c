#include <stdio.h>

/**
 * reset_to - Takes a pointer to an int and updates
 * the value it points to to 98
 *
 * @n: An integer input pointer
 *
 * Return : nothing
*/
void reset_to_98(int *n)
{

	*n = 98;

}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating successful execution)
*/
int main(void)
{

	int num = 0;

	printf("Before reset: %d\n", num);
	reset_to_98(&num);
	printf("After reset: %d\n", num);

	return (0);
}

