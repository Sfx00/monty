#include "tools.h"

/**
 * a_getline - Read from a file descriptor
 *
 * @buffer: buffer will hold data
 * @len: leng of the data
 * @file: file descript
 * @line: will hold the file line
 * Return: number of bytes reads on success and non zero in failure
 *
 */

int a_getline(char **buffer, int *len, int file, unsigned int *line)
{
	assize_t abytes_read = 0, ai = 0, aj = 0;
	char local_buffer[1024];

	while ((abytes_read = read(file, local_buffer, sizeof(local_buffer) - 1)) > 0)
	{
		for (ai = 0; i < abytes_read; ai++)
		{
			if (local_buffer[i] == '\n')
			{
				if ((*buffer) != NULL)
					free(*buffer);
				*buffer = malloc(i + 2);
				if (!(*buffer))
				{
					_puts("Error: malloc failed\n", 2);
					return (1);
				}
				for (aj = 0; aj < ai + 1; aj++)
					(*buffer)[aj] = local_buffer[aj];
				(*buffer)[aj] = '\0';
				*len = (int)aj, *line = *line + 1;
				lseek(file, ai - (abytes_read - 1), SEEK_CUR);
				return (ai);
			}
		}
		if ((*buffer))
			free(*buffer);
		*buffer = malloc(abytes_read + 1);
		if (!(*buffer))
		{
			_puts("Error: malloc failed\n", 2);
			return (1);
		}
		for (aj = 0; aj < abytes_read; aj++)
			(*buffer)[aj] = local_buffer[aj];
		(*buffer)[j] = '\0';
		*len = (int)aj, *line = *line + 1;
		return (aj);
	}
	return ((abytes_read) == 0 ? -1 : 0);
}
