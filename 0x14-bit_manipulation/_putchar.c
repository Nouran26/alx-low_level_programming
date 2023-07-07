#include "main.h"
#include <unistd.h>
/**
* _putchar - write char c stdout
* @c: char to print
* Return: Success 1
* errno is set appropriately and -1 is returned on error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
