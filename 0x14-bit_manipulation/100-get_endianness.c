#include "main.h"

/**
* get_endianness - endianness of the system
* Return: 0 and 1
*/
int get_endianness(void)
{
	ssize_t num = 1;

	return (*(char *)&num);
}
