#include "main.h"
/**
* get_bit - get value bit at index in decimal num
* @n: num to get searched
* @index: the index of bit
* Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
