#include "main.h"
/**
* set_bit - set bit at given index to 1
* @n: pointer to num to change
* @index: index bit to set to 1
* Return: 1 On Success, -1 when failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
