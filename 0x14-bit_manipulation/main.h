#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *a);

void print_binary(unsigned long int nmbr);

int get_bit(unsigned long int nmbr, unsigned int ind);

int set_bit(unsigned long int *nmbr, unsigned int ind);

int clear_bit(unsigned long int *mbr, unsigned int ind);

unsigned int flip_bits(unsigned long int nmbr, unsigned long int nmbr_ii);

int _atoi(const char *s);

int _putchar(char c);

int get_endianness(void);

#endif

