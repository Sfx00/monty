#ifndef __tools__
#define __tools__
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int _putchar(char a, int m);
int _puts(char *str, int m);
int _getline(char **buffer, int *len, int file, unsigned int *line);
int _strlen(char *str);
int _kiki(char *vab);
void print_number(int n, int m);
int is_buffer_valid(char *buffer);

#endif
