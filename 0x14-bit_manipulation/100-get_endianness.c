#include "main.h"
/**
* get_endianness - check if the machine is big or little endian
* Return: 1 for little, 0 for big
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
