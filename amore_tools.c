#include "tools.h"

/**
 * ais_buffer_valid - check if buffer is not empty
 *
 * @buffer: buffer (string)
 *
 * Return: 0 if success otherwise -1
 */
int ais_buffer_valid(char *buffer)
{
	int ai = 0;

	if (buffer[0] == '\n' || buffer[0] == '#')
		return (-1);
	while (buffer[ai])/**/
	{
		if (buffer[ai] != 32 && buffer[ai] != 9 && buffer[ai] != '\n')
		{
			if (buffer[ai] == '#')
				return (-1);
			return (0);
		}
		ai++;
	}
	return (-1);
}
