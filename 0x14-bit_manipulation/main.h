#ifndef MAIN_H
#define MAIN_H
void print_binary(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
int _atoi(const char *s);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
#endif
