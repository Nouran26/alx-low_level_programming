#include "main.h"
/**
* clear_bit - set value of given bit to 0
* @n: pointer to num to convert
* @index: index bit to get cleared
*Return: 1 (Success), -1 when it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
