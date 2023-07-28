#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @c: pointer for string
 *
 * Return: string after convert it
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[++i])
	{
		if (i == 0)
			c[i] = c[i] - 'a' + 'A';
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;
		if (c[i - 1] == ' '
				|| c[i - 1] == '\t'
				|| c[i - 1] == '\n'
				|| c[i - 1] == ':'
				|| c[i - 1] == '.'
				|| c[i - 1] == '!'
				|| c[i - 1] == ','
				|| c[i - 1] == '?'
				|| c[i - 1] == '"'
				|| c[i - 1] == '('
				|| c[i - 1] == ')'
				|| c[i - 1] == '{'
				|| c[i - 1] == '}')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
