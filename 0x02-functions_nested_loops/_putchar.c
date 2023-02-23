#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charactor c to stdout
 * @c: The charactor to print
 *
 * Return: On success 1
 * On error, -1 is returned, and ermo is set appropriately
 */
int -putchar(char c)			{						return (write (1, &c, 1));	
}
